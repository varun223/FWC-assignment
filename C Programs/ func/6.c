#include <stdio.h>

void printMultiplicationTable(int num)
{
    printf("Multiplication table for %d:\n", num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printMultiplicationTable(n);
    return 0;
}