/* 
 * 100 Days of Code - Day 07 (Part 1)
 * Topic: In-Place Memory Swapping Mechanics
 * Description: Interchanges two variable data inputs mathematically 
 *              without allocating any temporary third storage block.
 */

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers to swap: ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: %d %d\n", a, b);

    return 0;
}
