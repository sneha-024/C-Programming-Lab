#include <stdio.h>

int main()
{
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[10];
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int i;

    // Copy elements of arr1 to arr2
    for(i=0; i<n; i++)
        arr2[i] = arr1[i];

    printf("Elements of arr2 are: ");
    for(i=0; i<n; i++)
        printf("%d ", arr2[i]);

    return 0;
}
