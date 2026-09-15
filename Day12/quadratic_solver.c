/* 
 * 100 Days of Code - Day 12 (Part 1)
 * Topic: Mathematical Computations & Discriminant Evaluation
 * Description: Finds the roots of a quadratic equation using sqrt() from math.h 
 *              and categorizes them into real distinct, real equal, or complex.
 */

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, root1, root2;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);

        printf("Roots are real and different: %g, %g\n", root1, root2);
    }
    else if (d == 0)
    {
        root1 = -b / (2 * a);

        printf("Roots are real and same: %g\n", root1);
    }
    else
    {
        printf("Roots are complex\n");
    }

    return 0;
}
