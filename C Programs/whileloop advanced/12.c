#include <stdio.h>

int main()
{
    int start, end;
    printf("Enter two numbers: ");
    scanf("%d %d", &start, &end);

    printf("output: ");
    int i = end;
    while (i >= start)
    {
        printf("%d ", i);
        i--;
    }
    printf("\n");
    return 0;
}