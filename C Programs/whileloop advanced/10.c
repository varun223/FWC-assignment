#include <stdio.h>

int main()
{
    int n, i = 1;
    printf("Enter n number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        int a, b;
        char op;
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        getchar(); // To consume newline

        printf("Enter a character (+, -, *, /, %%): ");
        scanf("%c", &op);

        switch (op)
        {
        case '+':
            printf("Result of %d + %d is %d\n", a, b, a + b);
            break;
        case '-':
            printf("Result of %d - %d is %d\n", a, b, a - b);
            break;
        case '*':
            printf("Result of %d * %d is %d\n", a, b, a * b);
            break;
        case '/':
            if (b != 0)
            {
                printf("Result of %d / %d is %.2f\n", a, b, (float)a / b);
            }
            else
            {
                printf("Division by zero error\n");
            }
            break;
        case '%':
            printf("Result of %d %% %d is %d\n", a, b, a % b);
            break;
        default:
            printf("Invalid operator\n");
        }
        i++;
    }
    return 0;
}