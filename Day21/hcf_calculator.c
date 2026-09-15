/* 
 * 100 Days of Code - Day 21 (Part 2)
 * Topic: Multi-Variable Relational Loop Matching
 * Description: Inputs two distinct integer parameters and maps loop indexes 
 *              simultaneously across both records to compute the Highest Common Factor.
 */

#include <stdio.h>

int main()
{
    int a, b, i, hcf = 1;

    printf("Enter two numbers to find HCF: ");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }

    printf("HCF (GCD) of %d and %d = %d\n", a, b, hcf);

    return 0;
}
