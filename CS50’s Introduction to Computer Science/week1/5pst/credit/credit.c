#include <cs50.h>
#include <stdio.h>

void card(long numb);

int main(void)
{
    // get credit card number
    long cardnumb = get_long("Number: ");
    // give the result of card
    card(cardnumb);
}

void card(long numb)
{
    long digit2 = numb;
    int product = 0;
    int sum1 = 0;
    // 1. calculate checksum
    // 1-1 Multiply every other digit by 2, starting with the number’s second-to-last digit, and then add those products’ digits together.
    do
    {
        // get the second-to-last digit and multiply by 2
        product = ((digit2 % 100)) / 10 * 2;

        // add the product digit togeter
        if (product < 10)
        {
            sum1 = sum1 + product;
        }
        else
        {
            sum1 = sum1 + (product / 10) + (product % 10);
        }

        // update number to emit the last two digits
        digit2 = digit2 / 100;
    }
    while (digit2 > 0);

    // 1-2 Add the sum to the sum of the digits that weren’t multiplied by 2.
    long digit1 = numb;
    do
    {
        // add every other digit from last one to sum
        sum1 = sum1 + (digit1 % 10);
        // update number to emit the last two digits
        digit1 = digit1 / 100;
    }
    while (digit1 > 0);

    // 1-3 If the total’s last digit is 0 (or, put more formally, if the total modulo 10 is congruent to 0), the number is valid!
    int check = sum1 % 10;

    // 2. check for card length and starting digit
    // Visa uses 13- and 16-digit numbers start with 4.
    if (check == 0 && (numb / 1000000000000000 == 4 || numb / 1000000000000 == 4))
    {
        printf("VISA\n");
    }

    // MasterCard uses 16-digit numbers start with 51, 52, 53, 54, or 55;
    else if (check == 0 && (numb / 100000000000000 == 51 || numb / 100000000000000 == 52 || numb / 100000000000000 == 53\n
                            || numb / 100000000000000 == 54 || numb / 100000000000000 == 55))
    {
        printf("MASTERCARD\n");
    }
    // American Express uses 15-digit numbers start with 34 or 37,
    else if (check == 0 && (numb / 10000000000000 == 34 || numb / 10000000000000 == 37))
    {
        printf("AMEX\n");
    }
    else
    {
        printf("INVALID\n");
    }

    // 3. print out the result

}
