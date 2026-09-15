/* 
 * 100 Days of Code - Day 18 (Part 1)
 * Topic: Mathematical Sequences & Accumulative Products
 * Description: Uses an entry-controlled loop to trace incremental factorials 
 *              of a given number by applying continuous aggregation.
 */

#include <stdio.h>

int main()
{
    int n, i;
    int factorial = 1;

    printf("Enter a number to calculate factorial: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial = %d\n", factorial);

    return 0;
}
