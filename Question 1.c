#include <stdio.h>

int main()
{
    double num1, num2;
    char op;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    if (op == '+')
    {
        printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
    }
    else if (op == '-')
    {
        printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
    }
    else if (op == '*')
    {
        printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
    }
    else if (op == '/')
    {
        printf("%.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
    }
    else
    {
        printf("Error: Invalid operator");
    }

    return 0;
}