/* 
 * 100 Days of Code - Day 11 (Part 1)
 * Topic: ASCII Character Boundaries & Logical Filters
 * Description: Evaluates a character input against specific boundary ranges 
 *              to determine its typographic class using logical AND operators.
 */

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase alphabet\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase alphabet\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special character\n");
    }

    return 0;
}
