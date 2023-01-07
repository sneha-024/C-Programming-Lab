#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, max1, max2;

    // Find the largest and second largest numbers
    max1 = max2 = arr[0];
    for(i=1; i<n; i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] != max1)
            max2 = arr[i];
    }

    printf("Largest number: %d\n", max1);
    printf("Second largest number: %d\n", max2);

    return 0;
}
