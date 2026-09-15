/* 
 * 100 Days of Code - Day 37 (Part 1)
 * Topic: 2D Arrays & Individual Vector Reduction Sweeps
 * Description: Accumulates the elements of a 2D array row-by-row, isolating totals 
 *              sequentially inside a tracking array buffer to print out independent metrics.
 */

#include <stdio.h>

int main()
{
    int a[10][10];
    int rowSum[10];
    int rows, cols, i, j;

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

    /* Traversal loop mapping localized sum variations across row intervals */
    for(i = 0; i < rows; i++)
    {
        rowSum[i] = 0; // Initialize current row tracker slot to zero

        for(j = 0; j < cols; j++)
        {
            rowSum[i] = rowSum[i] + a[i][j];
        }
    }

    printf("\nSum of each row:\n");
    for(i = 0; i < rows; i++)
    {
        printf("Row %d Total = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
