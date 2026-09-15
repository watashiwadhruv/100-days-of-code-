/* 
 * 100 Days of Code - Day 17 (Part 2)
 * Topic: Iterative Multiplication & Product Tracking
 * Description: Loops through even numbers starting from 2 up to user-defined limit N 
 *              to evaluate their cumulative factor product.
 */

#include <stdio.h>

int main()
{
    int limit, i, product = 1;

    printf("Enter upper limit (n): ");
    scanf("%d", &limit);

    for (i = 2; i <= limit; i = i + 2)
    {
        product = product * i;
    }

    printf("Product of even numbers up to %d = %d\n", limit, product);

    return 0;
}
