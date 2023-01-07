#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int pos, i;

    printf("Enter the position of the element you want to delete: ");
    scanf("%d", &pos);

    // Shift elements of the array to the left
    for(i=pos; i<n-1; i++)
        arr[i] = arr[i+1];

    printf("New array is: ");
    for(i=0; i<n-1; i++)
        printf("%d ", arr[i]);

    return 0;
}
