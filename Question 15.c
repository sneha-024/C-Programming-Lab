#include <stdio.h>
int main()
{
    int side1, side2, side3;
    printf("Enter side 1: ");
    scanf("%d", &side1);
    printf("Enter side 2: ");
    scanf("%d", &side2);
    printf("Enter side 3: ");
    scanf("%d", &side3);
    if (side1 == side2 && side2 == side3)
        printf("The triangle is an equilateral triangle\n");
    else if (side1 == side2 || side1 == side3 || side2 == side3)
        printf("The triangle is an isosceles triangle\n");
    else
        printf("The triangle is a scalene triangle\n");
    return 0;
}