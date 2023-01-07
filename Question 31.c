#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, sum = 0;

    for(i=0; i<n; i++)
        sum = sum + arr[i];

    printf("Sum of all elements of the array: %d\n", sum);

    return 0;
}
