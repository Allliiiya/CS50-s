#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void binary(int num);
void print_bulb(int bit);

int main(void)
{
    // TODO
    // Get input from user:
    string text = get_string("Message: ");

    // conver character to ascii
    int len = strlen(text);
    int ascii_val[len];
    for (int i = 0; i < len; i++)
    {
        ascii_val[i] = (int) text[i];
        // printf("%i\n", ascii_val[i]);

        // convert ascii to binary
        binary(ascii_val[i]);
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}

void binary(int num)
{
    int bi[BITS_IN_BYTE] = {0};
    int i = 0;

    // convert number to binary
    while (num > 0)
    {
        bi[i] = num % 2;
        num /= 2;
        i++;
    }

    // print out the light
    for (int j = 7; j >= 0; j--)
    {
        print_bulb(bi[j]);
    }
    printf("\n");
}
