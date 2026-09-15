/* 
 * 100 Days of Code - Day 19 (Part 1)
 * Topic: 1D Arrays & Number System Conversions (Decimal to Binary)
 * Description: Converts a decimal number to binary by storing remainders 
 *              sequentially inside a fixed-size integer array structure.
 */

#include <stdio.h>

int main()
{
    int n, binary[32], i = 0;

    printf("Enter a decimal integer: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Binary Representation = 0\n");
        return 0;
    }

    while (n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary Representation = ");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
