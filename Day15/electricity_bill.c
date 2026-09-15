/* 
 * 100 Days of Code - Day 15 (Part 2)
 * Topic: Multi-Tier Slab Calculations & Float Tracking
 * Description: Scans utility units consumed and applies cumulative tax rates 
 *              sequentially to print out the final calculated cost.
 */

#include <stdio.h>

int main()
{
    int units;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100)
    {
        bill = units * 5;
    }
    else if (units <= 200)
    {
        bill = (100 * 5) + (units - 100) * 7;
    }
    else if (units <= 300)
    {
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    }
    else
    {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
    }

    printf("Bill: Rs.%g\n", bill);

    return 0;
}
