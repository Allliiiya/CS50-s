// Alphabetical Exercise
// Check if a lowercase string's characters are in
// alphabetical order. If yes, print "Yes". If no, print "No".
// asciichart.com

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get a string from user
    string word = get_string("Enter: ");

    // get the length of string
    int length = strlen(word);

    // check lowercase
    for (int i = 0; i < length - 1; i++)
    {
        if (word[i] > word[i+1])
        {
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");
    return 0;
}


// #include <stdio.h>
// #include <cs50.h>
// #include <string.h>

// int main(void)
// {
//     // Get input from the user
//     string word = get_string("Word: ");

//     // Determine length of our string
//     int length = strlen(word);

//     // First, assume everything is alphabetical
//     bool alphabetical = true;

//     // Look at every character
//     for (int i = 1; i < length; i++)
//     {
//         // If a character is not alphabetical from the one previous
//         if (word[i] < word[i - 1])
//         {
//             alphabetical = false;
//         }
//     }

//     if (alphabetical)
//     {
//         printf("Yes\n");
//     }
//     else
//     {
//         printf("No\n");
//     }
// }