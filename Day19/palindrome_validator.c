/* 
 * 100 Days of Code - Day 19 (Part 2)
 * Topic: Inversion Logic & Sequence Verification Loops
 * Description: Extracts single numeric units from a copied original integer 
 *              to verify matching properties against its inverse sequence.
 */

#include <stdio.h>

int main()
{
    int num, original, reverse = 0, remainder;

    printf("Enter a number to check for Palindrome status: ");
    scanf("%d", &num);

    original = num;

    while (num > 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if (original == reverse)
        printf("%d is a Palindrome.\n", original);
    else
        printf("%d is Not a palindrome.\n", original);

    return 0;
}
