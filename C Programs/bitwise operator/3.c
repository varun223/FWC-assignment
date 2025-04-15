#include <stdio.h>

void printBinary(int num, int size)
{
    for (int i = size * 8 - 1; i >= 0; i--)
    {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main()
{
    char x = 5;
    printf("Binary of char x=5: ");
    printBinary(x, sizeof(x));

    int y = 10;
    printf("Binary of int y=10: ");
    printBinary(y, sizeof(y));

    return 0;
}