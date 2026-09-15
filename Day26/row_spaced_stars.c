/* 
 * 100 Days of Code - Day 26 (Part 2)
 * Topic: Standard Matrix Iteration & Layout Formatting
 * Description: Arranges characters horizontally across active loop column depths, 
 *              inserting newline layout shifts exclusively at row boundaries.
 */

#include <stdio.h>

int main()
{
    int i, j;

    printf("Second Pattern:\n");

    // Outer loop controls row steps
    for(i = 1; i <= 5; i++)
    {
        // Inner loop outputs characters along current horizontal axis limit
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        // Newline shift after finishing each structural row group
        printf("\n");
    }

    return 0;
}
