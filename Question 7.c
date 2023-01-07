#include <stdio.h>

int main()
{
    int num, lsb, msb;

    printf("Enter a number: ");
    scanf("%d", &num);

    lsb = num & 1;
    msb = (num >> (sizeof(int) * 8 - 1)) & 1;

    printf("Least Significant Bit (LSB): %d\n", lsb);
    printf("Most Significant Bit (MSB): %d\n", msb);

    return 0;
}