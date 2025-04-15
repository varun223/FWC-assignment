#include <stdio.h>

int main()
{
    int rows = 5, i = 1, num = 1;

    // Using while loop
    printf("Using while loop:\n");
    while (i <= rows)
    {
        int j = 1;
        while (j <= i)
        {
            printf("%d ", num);
            num++;
            j++;
        }
        printf("\n");
        i++;
    }

    // Using do-while loop
    printf("\nUsing do-while loop:\n");
    i = 1;
    num = 1;
    do
    {
        int j = 1;
        do
        {
            printf("%d ", num);
            num++;
            j++;
        } while (j <= i);
        printf("\n");
        i++;
    } while (i <= rows);

    // Using for loop
    printf("\nUsing for loop:\n");
    num = 1;
    for (i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}