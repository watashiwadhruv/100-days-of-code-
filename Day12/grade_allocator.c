/* 
 * 100 Days of Code - Day 12 (Part 2)
 * Topic: Multi-Branch Range Checks & Condition Trees
 * Description: Inputs a student's percentage score and runs it through an 
 *              order-dependent ladder check to allocate grades from A to F.
 */

#include <stdio.h>

int main()
{
    int percentage;

    printf("Enter percentage (0-100): ");
    scanf("%d", &percentage);

    if (percentage >= 90 && percentage <= 100)
    {
        printf("Grade A\n");
    }
    else if (percentage >= 80 && percentage >= 0)
    {
        printf("Grade B\n");
    }
    else if (percentage >= 70 && percentage >= 0)
    {
        printf("Grade C\n");
    }
    else if (percentage >= 60 && percentage >= 0)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Grade F\n");
    }

    return 0;
}
