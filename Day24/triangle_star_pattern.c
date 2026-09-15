/* 
 * 100 Days of Code - Day 24 (Part 1)
 * Topic: Nested Loops & Dynamic Limit Control
 * Description: Renders a right-angled triangle pattern of stars where the number 
 *              of columns increases incrementally with each row execution.
 */

#include <stdio.h>

int main()
{
    int i, j;

    printf("Star Pattern:\n");

    // Outer loop controls rows
    for(i = 1; i <= 5; i++)
    {
        // Inner loop bounds are dictated dynamically by row index i
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
