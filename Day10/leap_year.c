/* 
 * 100 Days of Code - Day 10 (Part 1)
 * Topic: Conditional Structures & Logic Multi-Branching
 * Description: Inputs a year from the terminal and uses a sequence of 
 *              modulo operations to determine if it is a leap year.
 */

#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("Leap year\n");
    }
    else if (year % 100 == 0)
    {
        printf("Not a leap year\n");
    }
    else if (year % 4 == 0)
    {
        printf("Leap year\n");
    }
    else
    {
        printf("Not a leap year\n");
    }

    return 0;
}
