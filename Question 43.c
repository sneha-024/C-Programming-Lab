#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str1[MAX_SIZE];
    char str2[MAX_SIZE];
    int len1, len2;
    int i, j;

    // read two strings
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    // find the length of each string
    len1 = strlen(str1);
    len2 = strlen(str2);

    // compare the two strings
    if (strcmp(str1, str2) == 0)
    {
        printf("The two strings are equal.\n");
    }
    else
    {
        printf("The two strings are not equal.\n");
    }

    // copy the second string to the first string
    strcpy(str1, str2);
    printf("After copying, the first string is: %s\n", str1);

    // concatenate the two strings
    strcat(str1, str2);
    printf("After concatenation, the first string is: %s\n", str1);

    return 0;
}
