/* 
 * 100 Days of Code - Day 17 (Part 1)
 * Topic: Loop Stepping & Odd Number Summation
 * Description: Accumulates the sum of the first N odd numbers by iterating 
 *              with a step value of +2 across loop indexes.
 */

#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter count of odd numbers (n): ");
    scanf("%d", &n);

    for (i = 1; i <= 2 * n - 1; i = i + 2)
    {
        sum = sum + i;
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
