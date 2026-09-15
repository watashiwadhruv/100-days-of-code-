/* 
 * 100 Days of Code - Day 23 (Part 2)
 * Topic: Nested Loop Frameworks & Structural Layouts
 * Description: Uses an outer loop for rows and an inner loop for columns 
 *              to print a solid grid block layout of characters to the terminal.
 */

#include <stdio.h>

int main()
{
    int i, j;

    printf("Rendering 5x5 Square Matrix Pattern:\n");

    // Outer loop controls rows
    for(i = 1; i <= 5; i++)
    {
        // Inner loop controls columns
        for(j = 1; j <= 5; j++)
        {
            printf("*");
        }
        // Newline shift after finishing each row
        printf("\n");
    }

    return 0;
}
