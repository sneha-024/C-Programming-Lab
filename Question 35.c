#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, value;

    printf("Enter the value you want to search: ");
    scanf("%d", &value);

    // Search for the value in the array
    for(i=0; i<n; i++)
    {
        if(arr[i] == value)
        {
            printf("%d found at position %d\n", value, i+1);
            break;
        }
    }

    if(i == n)
        printf("%d not found in the array\n", value);

    return 0;
}
