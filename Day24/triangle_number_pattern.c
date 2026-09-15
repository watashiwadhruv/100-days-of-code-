/* 
 * 100 Days of Code - Day 24 (Part 2)
 * Topic: Nested Loop Counters & Text Grid Layouts
 * Description: Uses an outer row step and inner column loop to display the current 
 *              column sequence number in a triangular formatting matrix.
 */

#include <stdio.h>

int main()
{
    int i, j;

    printf("Number Pattern:\n");

    // Outer loop tracks rows
    for(i = 1; i <= 5; i++)
    {
        // Inner loop prints index markers up to row depth
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
