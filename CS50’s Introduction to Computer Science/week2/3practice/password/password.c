// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    // get the length of string for iterate through the string
    int length = strlen(password);

    // set each boolean value to check for at least one lower case letter, one upper case letter, one number and one symbol
    bool upper = false;
    bool lower = false;
    bool num = false;
    bool symbol = false;

    // iterate the string and check
    for (int i = 0; i < length; i++)
    {
        if (password[i] > 65 && password[i] < 95)  // if (isupper(password[i]))
        {
            upper = true;
        }
        else if (password[i] > 97 && password[i] < 122) // if (islower(password[i]))
        {
            lower = true;
        }
        else if (password[i] > 48 && password[i] < 57)  // if (isdigit(password[i]))
        {
            num = true;
        }
        else
        {
            symbol = true;
        }
    }

    // if the string has all elements, return true
    if (upper == true && lower == true && num == true && symbol == true)
    {
        return true;
    }

    // default to false
    return false;
}


// #include <ctype.h>
// isalpha() - checks whether a given character is an alphabetic character.
// isdigit() - checks whether a given character is a digit.
// isalnum() - checks whether a given character is an alphanumeric character (i.e., either a letter or a digit).
// isupper() - checks whether a given character is an uppercase letter.