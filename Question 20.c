#include <stdio.h>
int main()
{
    int num, rev = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    if (num == rev)
        printf("The number is a palindrome\n");
    else
        printf("The number is not a palindrome\n");
    return 0;
}