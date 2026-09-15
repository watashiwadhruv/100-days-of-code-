/* 
 * 100 Days of Code - Day 36 (Part 1)
 * Topic: 2D Arrays & Matrix Coordinate Traversal
 * Description: Declares a 2D integer array grid, populates row-column blocks via 
 *              nested loops, and outputs the structured matrix profile onto the terminal.
 */

#include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    /* Read Matrix data streams using coordinate maps */
    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    /* Print Matrix layout visually using newline shifts at row horizons */
    printf("\nMatrix is:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
