#include <stdio.h>

void calculateOperations(int a, int b, int *sum, int *diff, int *prod, int *quot, int *rem)
{
    *sum = a + b;
    *diff = a - b;
    *prod = a * b;
    if (b != 0)
    {
        *quot = a / b;
        *rem = a % b;
    }
    else
    {
        *quot = 0;
        *rem = 0;
    }
}

int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    int sum, diff, prod, quot, rem;
    calculateOperations(x, y, &sum, &diff, &prod, &quot, &rem);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    if (y != 0)
    {
        printf("Quotient: %d\n", quot);
        printf("Remainder: %d\n", rem);
    }
    else
    {
        printf("Division by zero error\n");
    }

    return 0;
}