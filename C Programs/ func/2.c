#include <stdio.h>

int power(int a, int n)
{
    int result = 1;
    while (n > 0)
    {
        result *= a;
        n--;
    }
    return result;
}

int main()
{
    int base, exponent;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    printf("%d to the power of %d is %d\n", base, exponent, power(base, exponent));
    return 0;
}