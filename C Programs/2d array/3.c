#include <stdio.h>

#define SIZE 3

void printMatrix(int mat[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int mat1[SIZE][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[SIZE][SIZE] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int sum[SIZE][SIZE], diff[SIZE][SIZE];

    // Matrix addition
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Matrix subtraction
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            diff[i][j] = mat1[i][j] - mat2[i][j];
        }
    }

    printf("Matrix 1:\n");
    printMatrix(mat1);

    printf("\nMatrix 2:\n");
    printMatrix(mat2);

    printf("\nMatrix Addition:\n");
    printMatrix(sum);

    printf("\nMatrix Subtraction:\n");
    printMatrix(diff);

    return 0;
}