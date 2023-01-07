#include <stdio.h>

int main()
{
    int base, height;
    float area;

    printf("Enter the base of the triangle: ");
    scanf("%d", &base);
    printf("Enter the height of the triangle: ");
    scanf("%d", &height);

    area = (float)base * height / 2;

    printf("The area of the triangle is %.2f\n", area);

    return 0;
}