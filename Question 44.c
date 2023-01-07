#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int len, i, j;
    int is_palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // compare the first and last characters, the second and the second-to-last characters, and so on
    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
