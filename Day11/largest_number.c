/* 
 * 100 Days of Code - Day 11 (Part 2)
 * Topic: Multi-Variable Relational Comparison Logic
 * Description: Inputs three separate numeric integers and checks their boundaries 
 *              simultaneously using logic switches to safely output the largest number.
 */

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("Largest is %d\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("Largest is %d\n", b);
    }
    else
    {
        printf("Largest is %d\n", c);
    }

    return 0;
}
