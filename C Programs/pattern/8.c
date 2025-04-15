#include <stdio.h>

int main()
{
    int rows = 5, i = 1;

    // Using while loop
    printf("Using while loop:\n");
    while (i <= rows)
    {
        int j = 1;
        while (j <= i)
        {
            printf("%d ", rows - i + 1);
            j++;
        }
        printf("\n");
        i++;
    }

    // Using do-while loop
    printf("\nUsing do-while loop:\n");
    i = 1;
    do
    {
        int j = 1;
        do
        {
            printf("%d ", rows - i + 1);
            j++;
        } while (j <= i);
        printf("\n");
        i++;
    } while (i <= rows);

    // Using for loop
    printf("\nUsing for loop:\n");
    for (i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", rows - i + 1);
        }
        printf("\n");
    }

    return 0;
}