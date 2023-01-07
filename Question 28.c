#include <stdio.h>

int main()
{
    int base, exponent, result = 1, i;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    for(i=1; i<=exponent; i++)
        result = result * base;

    printf("%d^%d = %d\n", base, exponent, result);

    return 0;
}
