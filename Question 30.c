#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        // Print leading spaces
        for(j=0; j<n-i-1; j++)
            printf("  ");

        // Print numbers in a row
        for(j=0; j<=i; j++)
            printf("%d ", factorial(i)/(factorial(j)*factorial(i-j)));

        printf("\n");
    }

    return 0;
}

int factorial(int n)
{
    int i, result = 1;

    for(i=1; i<=n; i++)
        result = result * i;

    return result;
}
