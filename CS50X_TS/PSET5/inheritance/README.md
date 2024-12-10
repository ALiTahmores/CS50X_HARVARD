# Inheritance

## Overview
This program simulates the inheritance of blood types in a family tree. It recursively creates a family tree structure and assigns blood types to each member based on the genetic rules of inheritance.

The exercise is part of CS50’s Problem Set 5 and focuses on dynamic memory allocation, structs, and recursive programming in C.

## Features
- **Recursive Family Tree Generation:** Simulates the genetic inheritance of blood types across multiple generations.
- **Dynamic Memory Allocation:** Allocates and frees memory dynamically for family members.
- **Structs:** Uses custom data structures to model individuals and their genetic traits.

## How It Works
1. Generates a family tree with a specified number of generations.
2. Assigns random blood types to the initial generation (the oldest).
3. Simulates the inheritance of blood types for subsequent generations.
4. Frees allocated memory to avoid memory leaks.

## Program Structure
### Data Structure
The program uses a `person` struct to model each individual in the family tree:
```c
typedef struct person
{
    struct person *parents[2];
    char *alleles;
} person;
