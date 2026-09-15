/* 
 * 100 Days of Code - Day 31 (Part 2)
 * Topic: Array Mutations & In-Place Pointer Swapping
 * Description: Walks an array to its central midpoint (`n / 2`), mirroring and 
 *              swapping elements systematically to reverse the array in-place.
 */

#include <stdio.h>

int main()
{
    int a[100], n, i, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /* In-place swap routine running up to array midpoint */
    for(i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    printf("Reversed array elements:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
