#include <stdio.h>

int main()
{
    int n, x, i = 1;
    printf("Enter n number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("Enter x value: ");
        scanf("%d", &x);

        if (x % 2 == 0)
        {
            printf("The given number %d is EVEN.\n", x);
        }
        else
        {
            printf("The given number %d is ODD.\n", x);
        }
        i++;
    }
    return 0;
}