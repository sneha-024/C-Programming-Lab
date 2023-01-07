// Call by value 
#include <stdio.h>

// function to swap two numbers using call by value
void swap_call_by_value(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap_call_by_value(x, y);
    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}


// Call by Reference 

#include <stdio.h>

// function to swap two numbers using call by reference
void swap_call_by_reference(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap_call_by_reference(&x, &y);
    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}
