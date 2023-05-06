// Powers of 2
// Create a program that prompts the user for a size, n.
// Dynamically create an array of that size, where each
// element is 2 times the previous one.
// Start the array at 1.
// Print the array, integer by integer.


#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // prompts the user for a size n which is bigger than 1
    int length;
    do{
        length = get_int("Length: ");
    }
    while (length < 1);

    // declera array
    int twice[length];

    // set the first value
    twice[0] = 1;
    printf("%i\n", twice[0]);

    //array of size n, element is 2 times the previous one
    for (int i = 1; i < length; i++)
    {
        // make sure the current element is twice of previous one
        twice[i] = 2 * twice[i-1];
        // print the current element
        printf("%i\n", twice[i]);
    }
}