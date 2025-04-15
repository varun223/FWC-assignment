#include <stdio.h>

int main()
{
    int rows = 5, i = 1;

    // Using while loop
    printf("Using while loop:\n");
    while (i <= rows)
    {
        int space = 1;
        while (space <= rows - i)
        {
            printf(" ");
            space++;
        }

        int j = 1;
        while (j <= 2 * i - 1)
        {
            printf("*");
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
        int space = 1;
        do
        {
            if (space <= rows - i)
            {
                printf(" ");
            }
            space++;
        } while (space <= rows);

        int j = 1;
        do
        {
            printf("*");
            j++;
        } while (j <= 2 * i - 1);
        printf("\n");
        i++;
    } while (i <= rows);

    // Using for loop
    printf("\nUsing for loop:\n");
    for (i = 1; i <= rows; i++)
    {
        for (int space = 1; space <= rows - i; space++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}