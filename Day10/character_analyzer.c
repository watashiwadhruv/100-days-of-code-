/* 
 * 100 Days of Code - Day 10 (Part 2)
 * Topic: Character I/O and Compound Logical Operators
 * Description: Scans a single character input and uses logical OR operators 
 *              to determine if it matches a lowercase or uppercase vowel.
 */

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Consonant\n");
    }

    return 0;
}
