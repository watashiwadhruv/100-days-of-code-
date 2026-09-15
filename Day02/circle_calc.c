/* 
 * 100 Days of Code - Day 02 (Part 2)
 * Topic: Floating-Point Math & Circle Geometry
 * Description: Computes the area and circumference of a circle using float parameters.
 */

#include <stdio.h>

int main()
{
    float radius, area, circumference;
    float pi = 3.14;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}
