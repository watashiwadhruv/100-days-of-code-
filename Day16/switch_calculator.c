/* 
 * 100 Days of Code - Day 16 (Part 1)
 * Topic: Character Switching Operations & Safety Check Blocks
 * Description: Scans arithmetic character operators (+, -, *, /, %) to map 
 *              inputs directly to computational states with division verification.
 */

#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter two numbers and an operator (e.g., 5 10 +): ");
    // The space before %c flushes any leftover whitespace buffers safely
    scanf("%d %d %c", &a, &b, &op);

    switch(op)
    {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("%d\n", a / b);
            else
                printf("Division by zero not possible\n");
            break;
        case '%':
            if (b != 0)
                printf("%d\n", a % b);
            else
                printf("Division by zero not possible\n");
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
