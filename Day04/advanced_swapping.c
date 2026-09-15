/* 
 * 100 Days of Code - Day 04 (Part 1)
 * Topic: Arithmetic Logic & In-Place Variable Swapping
 * Description: Swaps the data values of two user-input integers mathematically 
 *              without using a temporary third storage buffer.
 */

#include <stdio.h>

int main() 
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
