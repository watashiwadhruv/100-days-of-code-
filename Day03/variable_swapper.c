/* 
 * 100 Days of Code - Day 03 (Part 2)
 * Topic: Memory Swapping & Variable Tracking
 * Description: Swaps the data values of two user-input integers using a temporary variable.
 */

#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d", a, b);

    return 0;
}
