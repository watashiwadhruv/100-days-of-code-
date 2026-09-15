/* 
 * 100 Days of Code - Day 25 (Part 1)
 * Topic: Decrement Loops & Lower-Bound Grid Inversion
 * Description: Renders an incrementing numeric triangle matrix where rows 
 *              begin at decreasing initial numbers tracking from 5 down to 1.
 */

#include <stdio.h>

int main()
{
    int i, j;

    printf("Number Pattern:\n");

    // Outer loop runs backwards to adjust starting point of inner print
    for(i = 5; i >= 1; i--)
    {
        // Inner loop tracks from current index marker up to 5
        for(j = i; j <= 5; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
