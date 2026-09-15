/* 
 * 100 Days of Code - Day 22 (Part 1)
 * Topic: Ternary Operators & Infinite Loop Controls
 * Description: Computes the Lowest Common Multiple (LCM) of two numbers by 
 *              initializing at the maximum value and testing incremental boundaries.
 */

#include <stdio.h>

int main()
{
    int a, b, max;

    printf("Enter two numbers to find LCM: ");
    scanf("%d %d", &a, &b);

    // Using ternary operator to find maximum value
    max = (a > b) ? a : b;

    // Infinite loop until LCM condition is matched
    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            printf("LCM = %d\n", max);
            break;
        }
        max++;
    }

    return 0;
}
