#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, num, rem, sum, digits;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("All Armstrong numbers between 1 and %d are: \n", n);

    for(i=1; i<=n; i++)
    {
        num = i;
        sum = 0;
        digits = (int) log10(num) + 1;

        while(num > 0)
        {
            rem = num % 10;
            sum = sum + pow(rem, digits);
            num = num / 10;
        }

        if(sum == i)
            printf("%d\n", i);
    }

    return 0;
}



#include <stdio.h>
#include <math.h>

int main()
{
    int num, rem, sum, digits;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    sum = 0;
    digits = (int) log10(num) + 1;

    while(num > 0)
    {
        rem = num % 10;
        sum = sum + pow(rem, digits);
        num = num / 10;
    }

    if(sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
