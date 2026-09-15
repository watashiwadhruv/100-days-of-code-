/* 
 * 100 Days of Code - Day 08 (Part 1)
 * Topic: Conditional Statements (if-else logic)
 * Description: Takes an integer from the user and checks if it is 
 *              even or odd using the modulo arithmetic operator.
 */

#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer to check parity: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }

    return 0;
}
