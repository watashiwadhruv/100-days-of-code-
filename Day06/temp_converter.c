/* 
 * 100 Days of Code - Day 06 (Part 1)
 * Topic: Mathematical Conversions (Integer Evaluation)
 * Description: Converts a user-input temperature from Celsius to Fahrenheit 
 *              using basic integer data processing.
 */

#include <stdio.h>

int main() {
    int c, f;

    printf("Enter temperature in Celsius: ");
    scanf("%d", &c);

    f = (c * 9 / 5) + 32;

    printf("Fahrenheit=%d\n", f);

    return 0;
}
