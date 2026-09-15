/* 
 * 100 Days of Code - Day 30 (Part 1)
 * Topic: 1D Array Analysis & Parity Metrics Calculation
 * Description: Populates a fixed stack array using user entries, then checks 
 *              each index position to calculate the total number of even and odd values.
 */

#include <stdio.h>

int main()
{
    int a[100], n, i;
    int even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /* Count Even and Odd Numbers traversal loop */
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Even numbers count = %d\n", even);
    printf("Odd numbers count = %d\n", odd);

    return 0;
}
