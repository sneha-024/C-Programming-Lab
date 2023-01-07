#include <stdio.h>

#define ROW 3
#define COL 3

int main()
{
    int matrix[ROW][COL] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int scalar, i, j;

    printf("Enter the scalar value: ");
    scanf("%d", &scalar);

    // Perform scalar matrix multiplication
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
            matrix[i][j] = matrix[i][j] * scalar;
    }

    printf("Resulting matrix is:\n");
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    return 0;
}
