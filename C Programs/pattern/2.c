#include <stdio.h>

int main()
{
    int rows = 5, i = rows;

    // Using while loop
    printf("Using while loop:\n");
    while (i >= 1)
    {
        int j = 1;
        while (j <= i)
        {
            printf("* ");
            j++;
        }
        printf("\n");
        i--;
    }

    // Using do-while loop
    printf("\nUsing do-while loop:\n");
    i = rows;
    do
    {
        int j = 1;
        do
        {
            printf("* ");
            j++;
        } while (j <= i);
        printf("\n");
        i--;
    } while (i >= 1);

    // Using for loop
    printf("\nUsing for loop:\n");
    for (i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}