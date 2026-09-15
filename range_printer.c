/* 
 * 100 Days of Code - Day 16 (Part 2)
 * Topic: Basic Loops & Iterative Counter Tracking
 * Description: Processes a single target value N to print a sequence of incremented 
 *              integers running from 1 up to N using a 'for' statement framework.
 */

#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter upper limit n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
