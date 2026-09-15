/* 
 * 100 Days of Code - Day 28 (Part 1)
 * Topic: Nested Loops & Interval Search Algorithms
 * Description: Scans a maximum bound N and uses an outer iteration driver 
 *              with an inner factor counter to find all prime numbers up to N.
 */

#include <stdio.h>

int main()
{
    int n, i, j, count;

    printf("Enter the upper bound value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    // Outer loop drives numbers to check from 2 up to N
    for(i = 2; i <= n; i++)
    {
        count = 0;

        // Inner loop evaluates divisor factors for the current number
        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }

        // Standard primality verification check
        if(count == 2)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
