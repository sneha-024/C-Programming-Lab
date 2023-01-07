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



#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, j, temp;

    // Sort the array using bubble sort
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted array is: ");
    for(i=0; i<n; i++)



