#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int quotient(int a, int b) { return a / b; }
int remainder(int a, int b) { return a % b; }

int main()
{
    int n, a, b;
    char op;

    printf("Enter n number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        getchar();

        printf("Enter operator (+, -, *, /, %%): ");
        scanf("%c", &op);

        int result;
        switch (op)
        {
        case '+':
            result = add(a, b);
            break;
        case '-':
            result = sub(a, b);
            break;
        case '*':
            result = mul(a, b);
            break;
        case '/':
            result = quotient(a, b);
            break;
        case '%':
            result = remainder(a, b);
            break;
        default:
            printf("Invalid operator\n");
            continue;
        }

        printf("Result of %d %c %d is %d\n", a, op, b, result);
    }
    return 0;
}