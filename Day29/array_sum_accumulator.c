/* 
 * 100 Days of Code - Day 29 (Part 1)
 * Topic: 1D Array Buffers & Running Element Accumulation
 * Description: Populates a fixed stack array using sequential user entries, 
 *              then walks the index registers to compute the total metric sum.
 */

#include <stdio.h>

int main()
{
    int a[100], n, i;
    int sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /* Sum calculation loop traversal */
    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}
