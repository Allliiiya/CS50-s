// Initials
// Given a name as a set of command-line arguments,
// print the initials of that name to the terminal.

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    for (int i = 0; i < argc - 1; i++)
    {
        printf("%c", argv[i+1][0]);
    }
    printf("\n");
    // printf("%c\n", argv[1][0]);
    // printf("%c\n", argv[2][0]);
}