#include <stdio.h>

#define ROWS1 2
#define COLS1 3
#define ROWS2 3
#define COLS2 2

int main()
{
    int mat1[ROWS1][COLS1] = {{1, 2, 3}, {4, 5, 6}};
    int mat2[ROWS2][COLS2] = {{7, 8}, {9, 10}, {11, 12}};
    int product[ROWS1][COLS2] = {0};

    // Matrix multiplication
    for (int i = 0; i < ROWS1; i++)
    {
        for (int j = 0; j < COLS2; j++)
        {
            for (int k = 0; k < COLS1; k++)
            {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Matrix 1:\n");
    for (int i = 0; i < ROWS1; i++)
    {
        for (int j = 0; j < COLS1; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2:\n");
    for (int i = 0; i < ROWS2; i++)
    {
        for (int j = 0; j < COLS2; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix Multiplication:\n");
    for (int i = 0; i < ROWS1; i++)
    {
        for (int j = 0; j < COLS2; j++)
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}