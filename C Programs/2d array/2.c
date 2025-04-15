#include <stdio.h>

#define ROWS 2
#define COLS 3

int main()
{
    int matrix[ROWS][COLS] = {{1, 3, 4}, {5, 7, 8}};
    int transpose[COLS][ROWS];

    printf("Original matrix:\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Compute transpose
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\nTranspose matrix:\n");
    for (int i = 0; i < COLS; i++)
    {
        for (int j = 0; j < ROWS; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}