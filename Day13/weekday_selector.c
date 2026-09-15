/* 
 * 100 Days of Code - Day 13 (Part 2)
 * Topic: Switch-Case Control Flow Structures
 * Description: Maps an integer range (1-7) to print a specific day of the week, 
 *              handling structural fallbacks using a default case.
 */

#include <stdio.h>

int main()
{
    int day;

    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    switch(day)
    {
        case 1:
            printf("Monday\n");
            break;

        case 2:
            printf("Tuesday\n");
            break;

        case 3:
            printf("Wednesday\n");
            break;

        case 4:
            printf("Thursday\n");
            break;

        case 5:
            printf("Friday\n");
            break;

        case 6:
            printf("Saturday\n");
            break;

        case 7:
            printf("Sunday\n");
            break;

        default:
            printf("Invalid day number\n");
    }

    return 0;
}
