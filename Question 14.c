#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    switch (num > 0)
    {
    case 1:
        printf("The number is positive\n");
        break;
    case 0:
        if (num < 0)
            printf("The number is negative\n");
        else
            printf("The number is zero\n");
    }
    return 0;
}