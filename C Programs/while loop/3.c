#include <stdio.h>

int main()
{
    int n, fact = 1, i = 1;
    printf("Enter n number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        fact *= i;
        i++;
    }

    printf("Factorial of %d is %d\n", n, fact);
    return 0;
}