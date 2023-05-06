#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

// int text_grade(string text);
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    // Get the sentences from users
    string text = get_string("Text: ");

    // Get # of letters, words and sentences
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    //calculate the grade
    float l = letters * 100.0 / words ;
    float s = sentences * 100.0 / words;

    float score = 0.0588 * l - 0.296 * s - 15.8;
    int grade = round(score);

    // Print of the grade of the sentences.
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}

int count_letters(string text)
{
    int letter = 0;
    for (int i = 0, length = strlen(text); i < length; i++)
    {
        if (isalpha(text[i]))
        {
            letter ++;
        }
    }
    return letter;
}

int count_words(string text)
{
    int words = 1; // starts from 1 for any sentence has at least one word
    for (int i = 0, length = strlen(text); i < length; i++)
    {
        if (isspace(text[i]))
        {
            words ++;
        }
    }
    return words;
}

int count_sentences(string text)
{
    int sentences = 0; // starts from 1 for any sentence has at least one word
    for (int i = 0, length = strlen(text); i < length; i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences ++;
        }
    }
    return sentences;
}

// int text_grade(string text)
// {
//     int grade = 0;
//     // index = 0.0588 * L - 0.296 * S - 15.8
//     // L is the average number of letters per 100 words in the text
//     // S is the average number of sentences per 100 words in the text.

//     // Get the # of letters, sentences, and words
//     int letters = 0;
//     int sentences = 0;
//     int words = 1;

//     for (int i = 0, length = strlen(text); i < length; i++)
//     {
//         if (isupper(text[i]) || islower(text[i]))
//         {
//             letters ++;
//         }
//         else if (isspace(text[i]))
//         {
//             words ++;
//         }
//         else if (ispunct(text[i]))
//         {
//             sentences++;
//         }
//     }

//     // L = # of letters / # of words * 100
//     // S = # of sentence / # of works * 100

//     float l = letters / words * 100;
//     float s = sentences / words * 100;

//     float index = 0.0588 * l - 0.296 * s - 15.8;
//     grade = round(index);

//     return grade;
// }