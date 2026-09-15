/* 
 * 100 Days of Code - Day 34 (Part 1)
 * Topic: 1D Array Mutations & Random Position Insertion
 * Description: Inserts an integer element into a user-specified position of an array, 
 *              shifting the balance elements to the right to prevent data loss.
 */

#include <stdio.h>

int main()
{
    int a[100], n, i;
    int element, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /* Core Insertion logic using index position adjustments */
    printf("Enter element to insert: ");
    scanf("%d", &element);

    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    // Shift elements backwards from the end up to the target index position
    for(i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos - 1] = element; // Map element into user slot (balancing 0-based indexing)
    n++;                  // Increment the global active array counter

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
