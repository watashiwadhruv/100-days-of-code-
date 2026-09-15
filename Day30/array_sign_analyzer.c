/* 
 * 100 Days of Code - Day 30 (Part 2)
 * Topic: Multi-Branch Decision Trees & Array Metric Filtering
 * Description: Sweeps an initialized data array using conditional logic statements 
 *              to calculate absolute counts of positive, negative, and zero values.
 */

#include <stdio.h>

int main()
{
    int a[100], n, i;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /* Count Positive, Negative and Zero traversal loop */
    for(i = 0; i < n; i++)
    {
        if(a[i] > 0)
        {
            positive++;
        }
        else if(a[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }

    printf("Positive numbers count = %d\n", positive);
    printf("Negative numbers count = %d\n", negative);
    printf("Zero elements count = %d\n", zero);

    return 0;
}
