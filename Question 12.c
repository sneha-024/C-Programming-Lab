/* Simple Calculator */
#include <stdio.h>
int main()
{
    char op;
    float num1, num2;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);
    switch (op)
    {
    case '+':
        printf("%.1f + %.1f = %.1f\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.1f - %.1f = %.1f\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%.1f * %.1f = %.1f\n", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%.1f / %.1f = %.1f\n", num1, num2, num1 / num2);
        break;
    default:
        printf("Error! Invalid operator\n");
    }
    return 0;
}
/* Days of week */
#include <stdio.h>
int main()
{
    int day;
    printf("Enter day of week (1-7): ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Error! Invalid day\n");
    }
    return 0;
}