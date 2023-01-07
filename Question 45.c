#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int count[256]; // an array to store the frequency of each character
    int len, i;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // initialize all elements of the count array to 0
    for (i = 0; i < 256; i++)
    {
        count[i] = 0;
    }

    // count the frequency of each character
    for (i = 0; i < len; i++)
    {
        count[str[i]]++;
    }

    // print the frequency of each character
    for (i = 0; i < 256; i++)
    {
        if (count[i] > 0)
        {
            printf("'%c' appears %d times.\n", i, count[i]);
        }
    }

    return 0;
}
