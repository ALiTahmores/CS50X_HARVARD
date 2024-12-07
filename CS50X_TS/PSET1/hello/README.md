# Problem Set 1: Hello

## Problem Description
The goal of this exercise is to write a simple program in C that:
1. Prompts the user for their name.
2. Outputs a greeting to the user in the format `hello, <name>`.

This task is a part of the CS50x 2024 Problem Set 1 and introduces students to basic input/output in C, as well as working with the `cs50.h` library.

---

## Solution
To solve this problem, I wrote a program in C that:
1. Utilizes the `get_string` function from the `cs50.h` library to get the user's input.
2. Uses the `printf` function to print a greeting that includes the user's name.

### Code
```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get user input
    string name = get_string("What's your name? ");
    // print hello to user's name
    printf("hello, %s\n", name);
}
