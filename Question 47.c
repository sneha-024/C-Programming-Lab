#include <stdio.h>
#include <math.h>

// function to check if a number is prime
int is_prime(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    int i;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

// function to check if a number is Armstrong
int is_armstrong(int n)
{
    int num = n;
    int digits = 0;
    int sum = 0;

    while (num > 0)
    {
        digits++;
        num /= 10;
    }

    num = n;
    while (num > 0)
    {
        int d = num % 10;
        sum += pow(d, digits);
        num /= 10;
    }

    return (sum == n);
}

// function to check if a number is perfect
int is_perfect(int n)
{
    int sum = 1;
    int i;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sum += i + n / i;
        }
    }

    if (n == sqrt(n) * sqrt(n))
    {
        sum -= sqrt(n);
    }

    return (sum == n);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (is_prime(n))
    {
        printf("The number is prime.\n");
    }
    else
    {
        printf("The number is not prime.\n");
    }

    if (is_armstrong(n))
    {
        printf("The number is an Armstrong number.\n");
    }
    else
    {
        printf("The number is not an Armstrong number.\n");
    }

    if (is_perfect(n))
    {
        printf("The number is a perfect number.\n");
    }
    else
    {
        printf("The number is not a perfect number.\n");
    }

    return 0;
}
