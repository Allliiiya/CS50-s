#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

float calc_hours(int hours[], int weeks, char output);

int main(void)
{
    // prompt user for number
    int weeks = get_int("Number of weeks taking CS50: ");

    // create an array
    int hours[weeks];

    // using the for loop to get hours from user and to store the hours of each week
    for (int i = 0; i < weeks; i++)
    {
        hours[i] = get_int("Week %i HW Hours: ", i);
    }

    // create an T/A output
    char output;
    // let user to choose T/A
    do
    {
        output = toupper(get_char("Enter T for total hours, A for average hours per week: "));
    }
    while (output != 'T' && output != 'A');

    // give the out put hours
    printf("%.1f hours\n", calc_hours(hours, weeks, output));
}

// TODO: complete the calc_hours function
float calc_hours(int hours[], int weeks, char output)
{
    // set up a sum to 0
    float sum = 0.0;

    // using for loop to add the current week hour to sum
    for (int i = 0; i < weeks; i++)
    {
        sum = sum + hours[i];
    }

    // get the avg
    float avg = sum / weeks;

    // return sum or avg base on output
    if (output == 'T')
    {
        return sum;
    }
    else
    {
        return avg;
    }
}