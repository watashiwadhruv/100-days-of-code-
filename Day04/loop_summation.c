/* 
 * 100 Days of Code - Day 04 (Part 2)
 * Topic: Loop Structures & Iterative Aggregation
 * Description: Uses a simple for loop to track running totals and 
 *              find the cumulative sum of natural numbers up to N.
 */

#include <stdio.h>

int main()
 {
    int n, sum = 0, i;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
}
