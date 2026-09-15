/* 
 * 100 Days of Code - Day 33 (Part 2)
 * Topic: Array Alterations & Memory Element Shifting
 * Description: Locates the appropriate position for a new element in a sorted list, 
 *              shifts the remaining entries to the right, and inserts the data.
 */

#include <stdio.h>

int main()
{
    int a[100], n, i;
    int element, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter element to insert: ");
    scanf("%d", &element);

    pos = n; // Default position assignment to the end of the array

    /* Locate the correct sorting insertion point */
    for(i = 0; i < n; i++)
    {
        if(element < a[i])
        {
            pos = i;
            break;
        }
    }

    /* Shift all elements one memory frame to the right to open space */
    for(i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = element; // Insert the item at its correct position
    n++;              // Expand the active array counter threshold

    printf("Array after ordered insertion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
