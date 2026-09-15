/* 
 * 100 Days of Code - Day 32 (Part 1)
 * Topic: 1D Array Merging & Index Tracking Math
 * Description: Reads two separate array blocks from user input and utilizes index shifting 
 *              to cleanly stack and copy both data arrays into a combined collection.
 */

#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int n1, n2, i;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter first array elements:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter second array elements:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    /* Copy first array elements directly */
    for(i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }

    /* Copy second array elements using an index offset marker */
    for(i = 0; i < n2; i++)
    {
        c[n1 + i] = b[i];
    }

    printf("Merged array elements:\n");
    for(i = 0; i < n1 + n2; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}
