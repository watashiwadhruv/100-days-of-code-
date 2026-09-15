/* 
 * 100 Days of Code - Day 22 (Part 2)
 * Topic: Digit Deconstruction & Accumulative Arithmetic
 * Description: Deconstructs an integer value digit by digit via base-10 modulo 
 *              reductions to evaluate the total cumulative sum.
 */

#include <stdio.h>

int main()
{
    int n, digit, sum = 0;

    printf("Enter an integer to calculate its digit sum: ");
    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
