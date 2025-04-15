#include <stdio.h>

int main()
{
    int n, i = 1;
    float sum = 0.0;
    printf("Enter n number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        if (i % 2 == 1)
        {
            sum += 1.0 / i;
        }
        else
        {
            sum -= 1.0 / i;
        }
        i++;
    }

    printf("Value of the series: %.4f\n", sum);
    return 0;
}