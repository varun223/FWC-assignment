#include <stdio.h>

int quotient(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Division by zero\n");
        return 0;
    }
    int q = 0;
    while (a >= b)
    {
        a -= b;
        q++;
    }
    return q;
}

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Quotient of %d divided by %d is %d\n", num1, num2, quotient(num1, num2));
    return 0;
}