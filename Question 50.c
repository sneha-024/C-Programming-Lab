#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int a[MAX_SIZE];
    int b[MAX_SIZE];
    int n;
    int i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // copy the array using pointers
    int *p = a;
    int *q = b;
    for (i = 0; i < n; i++)
    {
        *q = *p;
        p++;
        q++;
    }

    printf("The copied array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}
