#include <stdio.h>

#define ROW 3
#define COL 3

int main()
{
    int matrix[ROW][COL] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, sum = 0;

    // Find the sum of main diagonal elements
    for(i=0; i<ROW; i++)
        sum = sum + matrix[i][i];

    printf("Sum of main diagonal elements: %d\n", sum);

    return 0;
}
