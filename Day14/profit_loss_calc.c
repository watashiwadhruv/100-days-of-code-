/* 
 * 100 Days of Code - Day 14 (Part 2)
 * Topic: Financial Arithmetic & Branching Statements
 * Description: Inputs Cost Price and Selling Price to evaluate net operational outcomes 
 *              and calculate percentage shifts using conditional blocks.
 */

#include <stdio.h>

int main()
{
    float cp, sp, percentage;

    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);

    if (sp > cp)
    {
        percentage = ((sp - cp) / cp) * 100;
        printf("Profit %g%%\n", percentage);
    }
    else if (cp > sp)
    {
        percentage = ((cp - sp) / cp) * 100;
        printf("Loss %g%%\n", percentage);
    }
    else
    {
        printf("No Profit No Loss\n");
    }

    return 0;
}
