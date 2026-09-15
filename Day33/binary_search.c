/* 
 * 100 Days of Code - Day 33 (Part 1)
 * Topic: Searching Algorithms & Logarithmic Traversals (Binary Search)
 * Description: Implements a classic binary search strategy tracking high, low, 
 *              and midpoint bounds to isolate a target value key efficiently.
 */

#include <stdio.h>

int main()
{
    int a[100], n, i;
    int key, low, high, mid, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /* Core Binary Search structural logic */
    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
            printf("Element found at position %d\n", mid + 1);
            found = 1;
            break;
        }
        else if(key < a[mid])
        {
            high = mid - 1; // Pivot target space to the left half section
        }
        else
        {
            low = mid + 1;  // Pivot target space to the right half section
        }
    }

    if(found == 0)
    {
        printf("Element not found\n");
    }

    return 0;
}
