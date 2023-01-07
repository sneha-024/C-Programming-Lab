#include <stdio.h>

int main()
{
    int n, i, j, num, rem, sum, fact;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("All strong numbers between 1 and %d are: \n", n);

    for(i=1; i<=n; i++)
    {
        num = i;
        sum = 0;

        while(num > 0)
        {
            fact = 1;
            rem = num % 10;

            // Calculate factorial of each digit
            for(j=1; j<=rem; j++)
                fact = fact * j;

            sum = sum + fact;
            num = num / 10;
        }

        // If the sum of factorials of digits is equal to i, then i is a strong number
        if(sum == i)
            printf("%d\n", i);
    }

    return 0;
}
