#include <stdio.h>
#include <cs50.h>

const int N = 3;

// 4. ave by function
float average(int length, int array[]);

int main(void)
{
    // 3. using for loop and input
    // Get scores
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    // Print average
    printf("Average: %f\n", average(N, scores));

    // 2. using array
    // // Scores
    // int scores[3];
    // scores[0] = 72;
    // scores[1] = 73;
    // scores[2] = 33;

    // // Print average
    // printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);

    // 1. avg of scores
    // int score1 = 72;
    // int score2 = 73;
    // int score3 = 33;

    // printf("Average: %f\n", (score1 + score2 + score3) / (float) 3); // or 3.0


}

float average(int length, int array[])
{
    // Calculate average
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float) length;
}