/* 
 * 100 Days of Code - Day 08 (Part 2)
 * Topic: Nested Control Flow Structures
 * Description: Inputs an integer and passes it through nested if-else statements 
 *              to verify whether it is positive, negative, or exactly zero.
 */

#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer to analyze sign: ");
    scanf("%d", &num);

    if (num >= 0) {
        if (num == 0) {
            printf("Zero\n");
        } else {
            printf("Positive\n");
        }
    } else {
        printf("Negative\n");
    }

    return 0;
}
