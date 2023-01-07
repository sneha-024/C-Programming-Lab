#include <stdio.h>
#include <math.h>

int main()
{
    float num, power, sqrt;

    printf("Enter a number: ");
    scanf("%f", &num);

    power = pow(num, 2);
    sqrt = sqrt(num);

    printf("The square of %.2f is %.2f\n", num, power);
    printf("The square root of %.2f is %.2f\n", num, sqrt);

    return 0;
}