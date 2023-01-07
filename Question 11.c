#include <stdio.h>
int main()
{
    float units, bill;
    const float RATE1 = 1.20, RATE2 = 1.50, RATE3 = 2.00, RATE4 = 2.50;
    printf("Enter the number of units consumed: ");
    scanf("%f", &units);
    if (units <= 100)
        bill = units * RATE1;
    else if (units <= 300)
        bill = 100 * RATE1 + (units - 100) * RATE2;
    else if (units <= 600)
        bill = 100 * RATE1 + 200 * RATE2 + (units - 300) * RATE3;
    else
        bill = 100 * RATE1 + 200 * RATE2 + 300 * RATE3 + (units - 600) * RATE4;
    printf("Total electricity bill: %.2f\n", bill);
    return 0;
}