#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, i, j, is_prime;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("All prime numbers between 1 and %d are: \n", n);

    for(i=2; i<=n; i++)
    {
        is_prime = true;

        // Check if i is prime
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                is_prime = false;
                break;
            }
        }

        // If i is prime, print it
        if(is_prime)
            printf("%d\n", i);
    }

    return 0;
}
