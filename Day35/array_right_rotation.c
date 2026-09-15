/* 
 * 100 Days of Code - Day 35 (Part 2)
 * Topic: Cyclic Shift Algorithms & Modulo Boundaries Optimization
 * Description: Shifts array elements cyclically to the right by shifting indexes, 
 *              optimizing out unnecessary whole rotations using k % n parameters.
 */

#include <stdio.h>

int main()
{
    int a[100], n, i, j;
    int k, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter number of positions to rotate: ");
    scanf("%d", &k);

    /* Optimization check: prevents running redundant complete revolutions */
    k = k % n;

    /* Execute the cyclic memory displacement shift loop K times */
    for(i = 1; i <= k; i++)
    {
        temp = a[n - 1]; // Temporarily store the tail element boundary

        // Shift all array elements forward down the index line
        for(j = n - 1; j > 0; j--)
        {
            a[j] = a[j - 1];
        }

        a[0] = temp; // Relocate original tail element back to head index
    }

    printf("Array after right rotation:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
