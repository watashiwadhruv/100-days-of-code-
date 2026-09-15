/* 
 * 100 Days of Code - Day 29 (Part 2)
 * Topic: Array Extremum Analysis & Linear Boundary Comparison
 * Description: Initializes search registers using the baseline array index element, 
 *              then sweeps the collection to determine absolute maximum and minimum bounds.
 */

#include <stdio.h>

int main()
{
    int a[100], n, i;
    int max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /* Seed structural boundary boundaries with the initial index element */
    max = a[0];
    min = a[0];

    /* Linear comparison pass starting from index position 1 */
    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }

        if(a[i] < min)
        {
            min = a[i];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
