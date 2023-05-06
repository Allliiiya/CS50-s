#include <stdio.h>
#include <cs50.h>

int get_size(void);
void print_grid(int n);

int main(void)
{
    // Get size of grid
    int n = get_size();

    // Print the grid of bricks
    print_grid(n);
}

int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    return n;
}

void print_grid(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

// block with everything in main
// int main (void)
// {
//     // const n = 3;
//     // int n = get_int("Size: ");

//     // Get size of grid
//     int n;
//     do
//     {
//         n = get_int("Size: ");
//     }
//     while (n < 1);

//     // Print grid of bricks
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("#");
//         }
//         printf("\n");
//     }
// }


// rows
// int main (void)
// {
//     for (int i = 0; i < 4; i++)
//     {
//         printf("?");
//     }
//     printf("\n");
// }

// columns
// int main(void)
// {
//     for (int i = 0; i < 3, i++)
//     {
//         printf("#\n");
//     }
// }

