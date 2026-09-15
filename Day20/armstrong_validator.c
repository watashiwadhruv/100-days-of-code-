/* 
 * 100 Days of Code - Day 20 (Part 1)
 * Topic: Digit Aggregation & Numeric Property Validation
 * Description: Extracts single numeric units using modulo 10 and checks 
 *              if the sum of the cubes of the digits equals the original number.
 */

#include <stdio.h>

int main()
{
    int n, original, remainder, sum = 0;

    printf("Enter a number to check Armstrong status: ");
    scanf("%d", &n);

    original = n;

    while (n > 0)
    {
        remainder = n % 10;
        sum = sum + (remainder * remainder * remainder);
        n = n / 10;
    }

    if (original == sum)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is Not an Armstrong number.\n", original);

    return 0;
}
