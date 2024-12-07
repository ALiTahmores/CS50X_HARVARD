#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Maximum number of candidates allowed
#define MAX 9

// Define a structure for each candidate with a name and vote count
typedef struct
{
    string name;
    int votes;
} candidate;

// Array to hold all candidates (up to MAX)
candidate candidates[MAX];

// Number of candidates in the election
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for valid command-line arguments
    // We need at least one candidate (minimum two arguments: program name and at least one
    // candidate)
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Initialize the candidates array with names and set votes to 0
    candidate_count = argc - 1; // The number of candidates is argc - 1 (excluding the program name)
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name =
            argv[i + 1];         // Assign the candidate's name from the command-line arguments
        candidates[i].votes = 0; // Initialize their votes to 0
    }

    // Ask for the number of voters
    int voter_count = get_int("Number of voters: ");

    // Loop over each voter and ask for their vote
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: "); // Get the name of the candidate the voter votes for

        // Check if the vote is valid
        if (!vote(name))
        {
            printf("Invalid vote.\n"); // If the name is not a valid candidate, print an error
        }
    }

    // Once all votes are cast, print the winner(s)
    print_winner();
}

// Function to update the vote totals for a given vote
bool vote(string name)
{
    // Loop through all candidates to find a match
    for (int i = 0; i < candidate_count; i++)
    {
        // If the candidate's name matches the given name
        if (strcmp(candidates[i].name, name) == 0)
        {
            candidates[i].votes += 1; // Increment their vote count
            return true;              // Return true indicating a valid vote
        }
    }
    return false; // If no match is found, return false indicating an invalid vote
}

// Function to print the winner(s) of the election
void print_winner(void)
{
    int max_votes = 0;

    // First, find the maximum number of votes received by any candidate
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes > max_votes)
        {
            max_votes = candidates[i].votes;
        }
    }

    // Now, print all candidates who have the maximum vote count (in case of ties)
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes == max_votes)
        {
            printf("%s\n", candidates[i].name); // Print the candidate's name
        }
    }
}
