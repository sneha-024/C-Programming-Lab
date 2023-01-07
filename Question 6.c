#include <stdio.h>

int main()
{
    float sub1, sub2, sub3, sub4, sub5;
    float total, average, percentage;

    printf("Enter marks for subject 1: ");
    scanf("%f", &sub1);
    printf("Enter marks for subject 2: ");
    scanf("%f", &sub2);
    printf("Enter marks for subject 3: ");
    scanf("%f", &sub3);
    printf("Enter marks for subject 4: ");
    scanf("%f", &sub4);
    printf("Enter marks for subject 5: ");
    scanf("%f", &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    average = total / 5;
    percentage = (total / 500) * 100;

    printf("Total marks: %.2f\n", total);
    printf("Average marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 90)
        printf("Grade: A+\n");
    else if (percentage >= 80)
        printf("Grade: A\n");
    else if (percentage >= 70)
        printf("Grade: B+\n");
    else if (percentage >= 60)
        printf("Grade: B\n");
    else if (percentage >= 50)
        printf("Grade: C+\n");
    else if (percentage >= 40)
        printf("Grade: C\n");
    else
        printf("Grade: F\n");

    return 0;
}