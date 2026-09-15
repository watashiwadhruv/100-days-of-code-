/* 
 * 100 Days of Code - Day 20 (Part 2)
 * Topic: Finite Iteration Loops & Primality Testing
 * Description: Runs a counter loop from 1 to N to calculate exact factors, 
 *              verifying primality based on standard boundary checks.
 */

#include <stdio.h>

int main()
{
    int num, i, count = 0;

    printf("Enter a number to verify primality: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is Not a prime number.\n", num);

    return 0;
}
