/* 
 * 100 Days of Code - Day 34 (Part 2)
 * Topic: Array Compaction & Index Deletion Loops
 * Description: Deletes an element from a specific user-defined index position 
 *              and shifts all subsequent array contents left to close the gap.
 */

#include <stdio.h>

int main()
{
    int a[100], n, i;
    int pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /* Core Deletion logic using forward element shifting */
    printf("\nEnter position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    // Shift succeeding elements forward over the target memory frame
    for(i = pos - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--; // Contract the global active array counter

    printf("Array after deletion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
