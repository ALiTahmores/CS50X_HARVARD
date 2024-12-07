// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// Number of buckets in hash table
const unsigned int N = 1000; // Increased size for better distribution

// Hash table
node *table[N];

// Word count in dictionary
unsigned int word_count = 0;

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // Hash word to find the appropriate bucket
    unsigned int index = hash(word);

    // Traverse the linked list at the corresponding bucket
    for (node *cursor = table[index]; cursor != NULL; cursor = cursor->next)
    {
        // Compare the word, ignoring case
        if (strcasecmp(cursor->word, word) == 0)
        {
            return true;
        }
    }
    return false;
}

// Hashes word to a number using djb2 algorithm
unsigned int hash(const char *word)
{
    unsigned long hash = 5381;
    int c;

    while ((c = *word++))
    {
        hash = ((hash << 5) + hash) + tolower(c); // hash * 33 + c
    }

    return hash % N;
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // Open dictionary file
    FILE *file = fopen(dictionary, "r");
    if (file == NULL)
    {
        return false;
    }

    // Buffer to store words from dictionary
    char word[LENGTH + 1];

    // Read words from the file one at a time
    while (fscanf(file, "%s", word) != EOF)
    {
        // Create a new node for each word
        node *new_node = malloc(sizeof(node));
        if (new_node == NULL)
        {
            fclose(file);
            return false;
        }

        // Copy the word into the node
        strcpy(new_node->word, word);

        // Hash the word to get an index
        unsigned int index = hash(word);

        // Insert the node into the hash table (at the beginning of the linked list)
        new_node->next = table[index];
        table[index] = new_node;

        // Increment word count
        word_count++;
    }

    // Close the dictionary file
    fclose(file);
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    return word_count;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // Iterate over every bucket
    for (int i = 0; i < N; i++)
    {
        node *cursor = table[i];
        while (cursor != NULL)
        {
            node *tmp = cursor;
            cursor = cursor->next;
            free(tmp);
        }
    }
    return true;
}
