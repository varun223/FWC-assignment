#include <stdio.h>

int remainder(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Division by zero\n");
        return 0;
    }
    while (a >= b)
    {
        a -= b;
    }
    return a;
}

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Remainder of %d divided by %d is %d\n", num1, num2, remainder(num1, num2));
    return 0;
}