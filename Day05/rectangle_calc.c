/* 
 * 100 Days of Code - Day 05 (Part 1)
 * Topic: Basic Geometric Computations (Integer Arithmetic)
 * Description: Computes the area and perimeter of a rectangle using 
 *              standard integer input values.
 */

#include <stdio.h>

int main()
{
    int length, breadth, area, perimeter;

    printf("Enter length and breadth: ");
    scanf("%d %d", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area=%d, Perimeter=%d\n", area, perimeter);

    return 0;
}
