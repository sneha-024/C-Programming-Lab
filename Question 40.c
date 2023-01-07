#include <stdio.h>

#define ROW 4
#define COL 4

int main()
{
    int matrix[ROW][COL] = {{1, 0, 3, 0}, {0, 5, 0, 7}, {9, 0, 11, 0}, {0, 13, 0, 15}};
    int i, j, count = 0;

    // Count the number of non-zero elements
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            if(matrix[i][j] != 0)
                count++;
        }
    }

    if(count < ROW*COL/2)
        printf("The matrix is sparse.\n");
    else
        printf("The matrix is not sparse.\n");

    return 0;
}
