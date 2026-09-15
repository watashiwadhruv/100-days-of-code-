/* 
 * 100 Days of Code - Day 32 (Part 2)
 * Topic: Hash-Style Index Counters & Numeric Frequency Audits
 * Description: Extracts digits via base-10 modulo arithmetic, using the digit values 
 *              directly as array indices to count continuous duplicate records.
 */

#include <stdio.h>

int main()
{
    int num, digit, i;
    int count[10] = {0}; // Frequency mapping array initialized completely to zero
    int max, mostDigit;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    /* Absolute value filter to manage negative integers safely */
    if(num < 0)
    {
        num = -num;
    }

    if(num == 0)
    {
        count[0] = 1;
    }

    /* Digit extraction step updating the index tracker */
    while(num > 0)
    {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }

    max = count[0];
    mostDigit = 0;

    /* Scans the frequency tracker to find the global peak occurrences */
    for(i = 1; i < 10; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            mostDigit = i;
        }
    }

    printf("Most occurring digit = %d\n", mostDigit);
    printf("Number of occurrences = %d\n", max);

    return 0;
}
