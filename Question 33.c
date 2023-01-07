#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int pos, i, value;

    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);

    printf("Enter the value of the element: ");
    scanf("%d", &value);

    // Shift elements of the array to the right
    for(i=n-1; i>=pos; i--)
        arr[i+1] = arr[i];

    // Insert the element at the specified position
    arr[pos] = value;

    printf("New array is: ");
    for(i=0; i<=n; i++)
        printf("%d ", arr[i]);

    return 0;
}
