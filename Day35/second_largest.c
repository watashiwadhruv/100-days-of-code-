/* 
 * 100 Days of Code - Day 35 (Part 1)
 * Topic: Optimized Linear Search & Array Extremum Audits
 * Description: Scans the array in a single traversal pass, updating largest and 
 *              second largest registers while dynamically filtering duplicates.
 */

#include <stdio.h>

int main()
{
    int a[100], n, i;
    int largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /* Seed both tracking values with the initial element structure */
    largest = a[0];
    second = a[0];

    /* Single pass comparative loop framework starting at index 1 */
    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    printf("Second largest element = %d\n", second);

    return 0;
}
