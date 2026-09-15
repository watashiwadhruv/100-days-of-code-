/* 
 * 100 Days of Code - Day 07 (Part 2)
 * Topic: Loop Iteration & Finite Data Accumulation
 * Description: Uses a standard for-loop to run calculations up to a user-defined 
 *              limit N to isolate the cumulative sum of natural numbers.
 */

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the limit n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum=%d\n", sum);

    return 0;
}
