// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

string replace(string input);

int main(int argc, string argv[])
{
    // If your program is executed without any command-line arguments or with more than one command-line argument,
    // your program should print an error message of your choice (with printf) and return from main a value of 1
    // (which tends to signify an error) immediately.
    if (argc != 2)
    {
        printf("Usage: ./no-vowels word\n");
        return 1;
    }

    // change the following vowels to numbers
    string output = replace(argv[1]);

    // print the converted word
    printf("%s\n", output);
    return 0;
}

string replace(string input)
{
    // a becomes 6, e becomes 3, i becomes 1, o becomes 0 and u does not change.
    int length = strlen(input);
    for (int i = 0; i < length; i++)
    {
        switch (input[i])
        {
            case 'a':
                input[i] = '6';
                break;
            case 'e':
                input[i] = '3';
                break;
            case 'i':
                input[i] = '1';
                break;
            case 'o':
                input[i] = '0';
                break;
            default:
                input[i] = input[i];
                break;
        }
    }
    return input;
}