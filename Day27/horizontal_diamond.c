/* 
 * 100 Days of Code - Day 27 (Part 1)
 * Topic: Advanced Nested Loops & Dual-Stage Pattern Structuring
 * Description: Generates a horizontal diamond profile by executing an increasing 
 *              star sequence followed immediately by an inverted mirror sequence.
 */

#include <stdio.h>

int main()
{
    int i, j;

    printf("Horizontal Diamond Pattern:\n");

    // Stage 1: Upper half of the diamond profile (Ascending values)
    for(i = 1; i <= 5; i++)
    {
        // Odd number arithmetic sets target column printing depths
        for(j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Stage 2: Lower half of the diamond profile (Descending values)
    for(i = 4; i >= 1; i--)
    {
        for(j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
