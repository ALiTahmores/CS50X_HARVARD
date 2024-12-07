#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string text = get_string("Text: ");

    if (strlen(text) == 0)
    {
        printf("Error: No text provided.\n");
        return 1;
    }

    float l = 0;
    float w = 1;
    float s = 0;
    int n = strlen(text);
    for (int i = 0; i < n; i++)
    {
        if (isalpha(text[i]))
        {
            l++;
        }
        if (text[i] == ' ')
        {
            w++;
        }
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            s++;
        }
    }

    float L = 100 * (l / w);
    float S = 100 * (s / w);

    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}
