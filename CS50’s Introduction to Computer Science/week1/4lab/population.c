#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompting the user for a starting # of llamas
    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);

    // Prompting the user for an ending # of llamas
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);

    // How many years will it take to get the goal?
    int years = 0;
    while (start < end)
    {
        //start += start / 12; // Every year, 1/3 of current llamas born; 1/4 died, so add 1/12
        start = start + (start / 3) - (start / 4);
        years++;
    }

    // Print of the number of years
    printf("Years: %i\n", years);

}