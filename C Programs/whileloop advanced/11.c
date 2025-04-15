#include <stdio.h>

int main()
{
    int start, end;
    printf("Enter two numbers: ");
    scanf("%d %d", &start, &end);

    printf("even numbers: ");
    int i = start;
    while (i <= end)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        i++;
    }

    printf("\nodd numbers: ");
    i = start;
    while (i <= end)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");
    return 0;
}