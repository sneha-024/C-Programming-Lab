#include <stdio.h>

int main()
{
    int angle1, angle2;
    int angle3;

    printf("Enter angle 1: ");
    scanf("%d", &angle1);
    printf("Enter angle 2: ");
    scanf("%d", &angle2);

    angle3 = 180 - angle1 - angle2;

    printf("Angle 3 = %d\n", angle3);

    return 0;
}