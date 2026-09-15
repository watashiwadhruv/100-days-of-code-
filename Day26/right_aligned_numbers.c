/* 
 * 100 Days of Code - Day 26 (Part 1)
 * Topic: Triple-Loop Structures & Spatial Text Realignment
 * Description: Combines decreasing space columns with an increasing 
 *              numerical data stream to align a triangle to the right text margin.
 */

#include <stdio.h>

int main()
{
    int i, j;

    printf("First Pattern:\n");

    // Outer loop sets limits moving backward from 5 down to 1
    for(i = 5; i >= 1; i--)
    {
        // First inner loop prints decreasing padding space layout
        for(j = 1; j < i; j++)
        {
            printf(" ");
        }

        // Second inner loop maps out active numeric indices up to 5
        for(j = i; j <= 5; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
