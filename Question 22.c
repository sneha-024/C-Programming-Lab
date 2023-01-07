#include <stdio.h>

int main()
{
    int num1, num2, i, gcd, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    for(i=1; i <= num1 && i <= num2; ++i)
    {
        // If i is a factor of both num1 and num2
        if(num1%i==0 && num2%i==0)
            gcd = i;
    }

    lcm = (num1*num2)/gcd;

    printf("The GCD of %d and %d is %d.\n", num1, num2, gcd);
    printf("The LCM of %d and %d is %d.\n", num1, num2, lcm);

    return 0;
}
