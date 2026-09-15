/* 
 * 100 Days of Code - Day 06 (Part 2)
 * Topic: Memory Swapping & Tracking Mechanics
 * Description: Interchanges two variable data inputs using a third temporary 
 *              memory register allocation.
 */

#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers to swap: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swap: %d %d\n", a, b);

    return 0;
}
