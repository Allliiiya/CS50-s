#include <cs50.h>
#include <stdio.h>

int height(void);
void pyramid(int h);

int main(void)
{
    // Get the height from user, limit in 1 to 8
    int h = height();

    // Print the pyramid
    pyramid(h);
}


int height(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    return height;
}



void pyramid(int h)
{
    // get the left pyramid first
    for (int i = h; i > 0; i--)
    {
        // reverse it to upside down
        for (int j = i - 1; j > 0; j--)
        {
            printf(" ");
        }
        // print the original pyramid
        for (int k = 0; k < h - i + 1; k++)
        {
            printf("#");
        }

        // print the space
        printf("  ");

        // print the new left pyramid
        for (int l = 0; l < h - i + 1; l++)
        {
            printf("#");
        }

        printf("\n");

    }
}