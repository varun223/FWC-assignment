#include <stdio.h>

int main()
{
    int n, x, i = 1;
    printf("Enter n number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("Enter x number: ");
        scanf("%d", &x);

        int j = 1;
        while (j <= 10)
        {
            printf("%d*%d =%d\n", x, j, x * j);
            j++;
        }
        i++;
    }
    return 0;
}