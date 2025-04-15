#include <stdio.h>

int xor(int a, int b)
{
    return (a | b) & (~a | ~b);
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("%d ^ %d = %d\n", a, b, xor(a, b));
    return 0;
}