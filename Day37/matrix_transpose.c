/* 
 * 100 Days of Code - Day 37 (Part 2)
 * Topic: Multidimensional Transformations & Index Inversion Algorithms
 * Description: Rearranges matrix grid bounds by flipping row/column index targets 
 *              interchangeably, rendering the transposed matrix onto the screen.
 */

#include <stdio.h>

int main()
{
    int a[10][10], transpose[10][10];
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

    /* Core Matrix Transposition swapping algorithm step */
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            transpose[j][i] = a[i][j]; // Inverting coordinate parameters into target positions
        }
    }

    /* Render transposed outputs utilizing inverted looping metrics limits (cols x rows) */
    printf("\nTranspose of matrix:\n");
    for(i = 0; i < cols; i++)
    {
        for(j = 0; j < rows; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
