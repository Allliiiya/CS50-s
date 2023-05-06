#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

bool only_digits(string s);
char rotate(char c, int n);

int main(int argc, string argv[])
{
    // Make sure program was run with just one command-line argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Make sure every character in argv[1] is a digit
    if (only_digits(argv[1]) == false)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Convert argv[1] from a `string` to an `int`
    int key = atoi(argv[1]) % 26;

    // Prompt user for plaintext
    string plaintext = get_string("plaintext:  ");

    char ciphertext[strlen(plaintext)];
    printf("ciphertext: ");
    // For each character in the plaintext:
    for (int i = 0, len = strlen(plaintext); i < len; i++)
    {
        // Rotate the character if it's a letter
        ciphertext[i] = rotate(plaintext[i], key);
        printf("%c", ciphertext[i]);
    }

    printf("\n");
    return 0;

}

bool only_digits(string s)
{
    for (int i = 0, len = strlen(s); i < len; i++)
    {
        if (isdigit(s[i]) == false)
        {
            return false;
        }
    }
    return true;
}

char rotate(char c, int n)
{
    int alph = 0;
    int form = 0;
    // rotate the character
    if (isalpha(c))
    {
        // convert ASCII to alphabetical index
        alph = (int)(c);

        if (isupper(c))
        {
            // shift alphabetical index use formula c = (p + k) % 26
            form = ((alph - 65) + n) % 26;
            // convert it back to ASCII
            c = (char)(form + 65);
        }
        else if (islower(c))
        {
            // shift alphabetical index use formula c = (p + k) % 26
            form = ((alph - 97) + n) % 26;
            // convert it back to ASCII
            c = (char)(form + 97);
        }
        return c;
    }

    return c;
}