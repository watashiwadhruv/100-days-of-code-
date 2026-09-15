/* 
 * 100 Days of Code - Day 21 (Part 1)
 * Topic: Mathematical Divisors & Linear Iteration Loops
 * Description: Scans an integer input and runs it through an entry-controlled 
 *              modulo loop to isolate and display all exact algebraic factors.
 */

#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter a number to find its factors: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
