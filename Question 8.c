#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);

    printf("\nUsing 3rd variable:\n");
    printf("Before swapping: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    printf("\nWithout 3rd variable:\n");
    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}