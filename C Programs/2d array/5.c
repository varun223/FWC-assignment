#include <stdio.h>

#define ROWS 3
#define COLS 3

void searchElement(int mat[ROWS][COLS], int key, int *row, int *col)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (mat[i][j] == key)
            {
                *row = i;
                *col = j;
                return;
            }
        }
    }
    *row = -1;
    *col = -1;
}

int main()
{
    int matrix[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int key, row, col;

    printf("Matrix:\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter element to search: ");
    scanf("%d", &key);

    searchElement(matrix, key, &row, &col);

    if (row != -1)
    {
        printf("Element %d found at row %d, column %d\n", key, row + 1, col + 1);
    }
    else
    {
        printf("Element %d not found in matrix\n", key);
    }

    return 0;
}