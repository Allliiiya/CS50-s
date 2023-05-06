#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

const int l = 26;

bool character(string s);
void substi(string key, string text);

int main(int argc, string argv[])
{
    // Make sure program was run with just one command-line argument
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    // Make sure every character in argv[1] is a 26-letter string
    if (character(argv[1]) == false)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    // Convert argv[1] to all uppercase
    string cipher = argv[1];
    for (int i = 0; i < l; i++)
    {
        cipher[i] = toupper(cipher[i]);
    }

    // Prompt user for plaintext
    string plaintext = get_string("plaintext:  ");

    // For each character in the plaintext:
    printf("ciphertext: ");
    substi(cipher, plaintext);
    return 0;
}

bool character(string s)
{
    // check lenght is 26
    if (strlen(s) != l)
    {
        return false;
    }

    // check if string is only letters
    int sum = 0;
    int truesum = 0;
    for (int i = 0; i < l; i++)
    {
        if (isalpha(s[i]) == false)
        {
            return false;
        }
        truesum += (65 + i);
        sum += (int)(s[i]);
    }

    // check if string has multiple letters -- sum('A' - 'Z')
    if (sum != truesum)
    {
        return false;
    }


    return true;
}

void substi(string key, string text)
{
    int len = strlen(text);
    char cipher[len];
    int position = 0;
    for (int i = 0; i < len; i++)
    {
        if (isupper(text[i]))
        {
            // letter convert to num to 0-25 -- position of A to Z
            position = (int)(text[i]) - 65;
            // substitute # into text letter to convert
            cipher[i] = key[position];
            printf("%c", cipher[i]);
        }
        else if (islower(text[i]))
        {
            // letter convert to num to 0-25 -- position of a to z
            position = (int)(text[i]) - 97;
            // substitute # into text letter to convert, change back to lower case
            cipher[i] = tolower(key[position]);
            printf("%c", cipher[i]);
        }
        else
        {
            printf("%c", text[i]);
        }
    }
    printf("\n");
}