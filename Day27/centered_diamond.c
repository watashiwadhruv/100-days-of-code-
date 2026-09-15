/* 
 * 100 Days of Code - Day 27 (Part 2)
 * Topic: Complex Grid Layouts & Balanced Space Margins
 * Description: Combines dynamic background padding spaces with odd-number tracking 
 *              limits across multi-tier setups to trace a centered vertical diamond.
 */

#include <stdio.h>

int main()
{
    int i, j;

    printf("Centered Vertical Diamond Pattern:\n");

    // Stage 1: Constructing the upper apex and center width
    for(i = 1; i <= 4; i++)
    {
        // Printing decreasing outer layout margin space bounds
        for(j = 1; j <= 4 - i; j++)
        {
            printf(" ");
        }

        // Printing centered character columns using odd numbers formulas
        for(j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // Stage 2: Constructing the lower inverted base profile
    for(i = 3; i >= 1; i--)
    {
        // Printing increasing outer layout margin space bounds
        for(j = 1; j <= 4 - i; j++)
        {
            printf(" ");
        }

        // Printing decreasing character columns using odd numbers formulas
        for(j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
