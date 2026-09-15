// ================= FILE 1: SIMPLE ADDITION =================
#include <stdio.h>
int main() 
{
	int a,b,sum;
	printf("enter two numbers :");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("sum=%d",sum);
	return 0;
}

// ================= FILE 2: ADVANCED CALCULATOR =================
#include <stdio.h>
int main_calculator() 
{
    int num1, num2;
    int sum, diff, prod;
    float quot;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", prod);

    if (num2 != 0) {
        quot = (float)num1 / num2;      
        printf("Quotient = %f\n", quot);
    } else {
        printf("Quotient = Division by zero is not allowed.\n");
    }
    return 0;
}
