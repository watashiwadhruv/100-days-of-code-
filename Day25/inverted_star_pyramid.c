/* 
 * 100 Days of Code - Day 25 (Part 2)
 * Topic: Space Padding Metrics & Triple-Loop Alignments
 * Description: Uses an outer row driver along with two distinct inner loops 
 *              (one tracking empty padding, one drawing markers) to shift output.
 */

#include <stdio.h>

int main()
{
    int i, j;

    printf("Star Pattern:\n");

    // Outer loop drives the grid row depth
    for(i = 0; i < 5; i++)
    {
        // First inner loop leaves custom margin spacing layout
        for(j = 0; j < i; j++)
        {
            printf(" ");
        }

        // Second inner loop draws decreasing balance stars
        for(j = i; j < 5; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
