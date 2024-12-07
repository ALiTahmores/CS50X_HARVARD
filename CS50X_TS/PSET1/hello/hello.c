#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get user input
    string name = get_string("What's your name? ");
    // print hello to user's name
    printf("hello, %s\n", name);
}
