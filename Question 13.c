#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    switch (ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("The character is a vowel\n");
        break;
    default:
        printf("The character is a consonant\n");
    }
    return 0;
}