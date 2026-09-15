/* 
 * 100 Days of Code - Day 02 (Part 1)
 * Topic: Floating-Point Math & Rectangle Geometry
 * Description: Computes the area and perimeter of a rectangle using float parameters.
 */

#include <stdio.h>

int main()
{
    float length, breadth, area, perimeter;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter breadth: ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}
