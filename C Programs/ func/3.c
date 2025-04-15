#include <stdio.h>

int multiply(int a, int b)
{
    int result = 0;
    while (b > 0)
    {
        result += a;
        b--;
    }
    return result;
}

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Product of %d and %d is %d\n", num1, num2, multiply(num1, num2));
    return 0;
}