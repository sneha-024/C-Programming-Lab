#include <stdio.h>
#include <math.h>

#define PI 3.14159

// function to find the diameter of a circle
double diameter(double radius)
{
    return 2 * radius;
}

// function to find the circumference of a circle
double circumference(double radius)
{
    return 2 * PI * radius;
}

// function to find the area of a circle
double area(double radius)
{
    return PI * radius * radius;
}

int main()
{
    double r;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &r);

    printf("The diameter of the circle is: %.2lf\n", diameter(r));
    printf("The circumference of the circle is: %.2lf\n", circumference(r));
    printf("The area of the circle is: %.2lf\n", area(r));

    return 0;
}
