#include <stdio.h>

int main()
{
    int a, b;
    int *p, *q;
    int sum;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    p = &a;
    q = &b;

    sum = *p + *q;

    printf("The sum is: %d\n", sum);

    return 0;
}
