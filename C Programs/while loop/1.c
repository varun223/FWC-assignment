#include <stdio.h>

int main()
{
    int n, num, sum = 0, i = 1;
    printf("Enter n number: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    while (i <= n)
    {
        scanf("%d", &num);
        sum += num;
        i++;
    }

    printf("Sum: %d\n", sum);
    return 0;
}