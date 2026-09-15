/* 
 * 100 Days of Code - Day 03 (Part 1)
 * Topic: Mathematical Conversions & Equations
 * Description: Converts a user-input temperature from Celsius to Fahrenheit.
 */

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit = %.2f", fahrenheit);

    return 0;
}
