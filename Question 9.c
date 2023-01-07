#include <stdio.h>

int main()
{
    int a, b, c;
    int max;

    printf("Enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);
    printf("Enter number c: ");
    scanf("%d", &c);

    printf("\nUsing Conditional Operator:\n");
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Maximum number: %d\n", max);

    printf("\nUsing Ternary Operator:\n");
    max = (a > b) ? a : b;
    max = (max > c) ? max : c;
    printf("Maximum number: %d\n", max);

    return 0;
}