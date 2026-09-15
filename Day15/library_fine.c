/* 
 * 100 Days of Code - Day 15 (Part 1)
 * Topic: Tiered Conditional Execution Logic
 * Description: Inputs late days and applies progressive slab-based arithmetic 
 *              to calculate library fees or cancel membership if over 30 days.
 */

#include <stdio.h>

int main()
{
    int days, fine;

    printf("Enter number of late days: ");
    scanf("%d", &days);

    if (days <= 5)
    {
        fine = days * 2;
        printf("Fine Rs.%d\n", fine);
    }
    else if (days <= 10)
    {
        fine = (5 * 2) + (days - 5) * 4;
        printf("Fine Rs.%d\n", fine);
    }
    else if (days <= 30)
    {
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
        printf("Fine Rs.%d\n", fine);
    }
    else
    {
        printf("Membership Cancelled\n");
    }

    return 0;
}
