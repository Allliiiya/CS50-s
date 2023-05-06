#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Prompt for user's name
    string name = get_string("Name: ");

    // Count number of characters up until '\0' (aka NUL)
    // first way:
    // int n = 0;
    // while (name[n] != '\0')
    // {
    //     n++;
    // }
    // printf("%i\n", n);

    // second way:
    int length = strlen(name);
    printf("%i\n", length);
}