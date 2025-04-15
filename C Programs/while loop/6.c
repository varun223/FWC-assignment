#include <stdio.h>

int main()
{
    int base, exponent, result = 1, i = 1;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    while (i <= exponent)
    {
        result *= base;
        i++;
    }

    printf("%d to the power of %d -> %d\n", base, exponent, result);
    return 0;
}