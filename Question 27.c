#include <stdio.h>

int main()
{
    int n, i, j, sum;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("All perfect numbers between 1 and %d are: \n", n);

    for(i=2; i<=n; i++)
    {
        sum = 1;

        // Find the sum of proper divisors of i
        for(j=2; j<i; j++)
        {
            if(i%j==0)
                sum = sum + j;
        }

        // If the sum of proper divisors is equal to i, then i is a perfect number
        if(sum == i)
            printf("%d\n", i);
    }

    return 0;
}
