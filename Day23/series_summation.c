/* 
 * 100 Days of Code - Day 23 (Part 1)
 * Topic: Mathematical Series & Floating-Point Typecasting
 * Description: Computes the sum of a custom mathematical sequence up to N terms 
 *              by forcefully typecasting integer denominators into high-precision floats.
 */

#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0.0;

    printf("Enter number of terms for the series: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        // Explicitly casting calculations to maintain decimal precision
        sum = sum + (float)(2 * i) / (4 * i - 1);
    }

    printf("Sum of the series = %.2f\n", sum);

    return 0;
}
