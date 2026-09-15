/* 
 * 100 Days of Code - Day 28 (Part 2)
 * Topic: 1D Arrays & Continuous Memory Traversal
 * Description: Allocates a fixed memory block array buffer to dynamically scan, 
 *              store, and print user-defined data sequences sequentially using index loops.
 */

#include <stdio.h>

int main()
{
    int n, i;
    int a[100]; // Pre-allocating continuous stack spaces for up to 100 integers

    printf("Enter number of elements to store in array: ");
    scanf("%d", &n);

    printf("Enter the %d integer elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Stored Array elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
