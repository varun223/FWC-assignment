#include <stdio.h>

int main()
{
    int a, b, result = 0, i = 1;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (i <= b)
    {
        result += a;
        i++;
    }

    printf("Result is %d\n", result);
    return 0;
}