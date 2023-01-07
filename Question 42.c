#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int a[MAX_SIZE], b[MAX_SIZE];
    int m, n;
    int i, j, k;

    printf("Enter the size of the first array: ");
    scanf("%d", &m);
    printf("Enter the elements of the first array: ");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n);
    printf("Enter the elements of the second array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    // merge the two arrays into the first array
    i = 0;
    j = 0;
    k = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            a[k] = a[i];
            i++;
        }
        else
        {
            a[k] = b[j];
            j++;
        }
        k++;
    }

    // copy the remaining elements of the first array, if any
    while (i < m)
    {
        a[k] = a[i];
        i++;
        k++;
    }

    // copy the remaining elements of the second array, if any
    while (j < n)
    {
        a[k] = b[j];
        j++;
        k++;
    }

    printf("The merged array is: ");
    for (i = 0; i < m + n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
