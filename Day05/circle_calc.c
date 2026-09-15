/* 
 * 100 Days of Code - Day 05 (Part 2)
 * Topic: Floating-Point Calculations with Constants
 * Description: Extracts the exact area and circumference of a circle 
 *              using a read-only float PI macro definition.
 */

#include <stdio.h>

int main()
{
    float radius, circle_area, circumference;
    const float PI = 3.14159;

    printf("Enter radius: ");
    scanf("%f", &radius);

    circle_area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area=%.2f, Circumference=%.2f\n", circle_area, circumference);

    return 0;
}
