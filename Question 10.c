#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("\nUsing Conditional Operator:\n");
    if (isalpha(ch))
        printf("The character is an alphabet\n");
    else if (isdigit(ch))
        printf("The character is a digit\n");
    else
        printf("The character is a special character\n");

    return 0;
}