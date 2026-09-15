/* 
 * 100 Days of Code - Day 13 (Part 1)
 * Topic: Relational Conditions & Geometric Logic
 * Description: Inputs three side lengths and checks their values against 
 *              each other to determine the structural type of the triangle.
 */

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("Equilateral\n");
    }
    else if (a == b || b == c || a == c)
    {
        printf("Isosceles\n");
    }
    else
    {
        printf("Scalene\n");
    }

    return 0;
}
