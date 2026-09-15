/* 
 * 100 Days of Code - Day 36 (Part 2)
 * Topic: 2D Matrix Traversal & Multi-Variable Reduction Loops
 * Description: Loops across the full breadth and depth of a two-dimensional 
 *              integer grid layout to calculate the cumulative sum of all components.
 */

#include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols, i, j;
    int sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    /* Traversal reduction pass over row x column memory segments */
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            sum = sum + a[i][j];
        }
    }

    printf("\nSum of all elements = %d\n", sum);

    return 0;
}
