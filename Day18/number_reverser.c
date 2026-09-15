/* 
 * 100 Days of Code - Day 18 (Part 2)
 * Topic: Digit Extraction Mechanics & Indefinite While Loops
 * Description: Extracts single numeric units using a modulo 10 routine 
 *              to reverse structural integer positions systematically.
 */

#include <stdio.h>

int main()
{
    int num, reverse = 0, digit;

    printf("Enter a number to reverse: ");
    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    printf("Reversed Number = %d\n", reverse);

    return 0;
}
