#include <stdio.h>

int is20thBitSet(int num)
{
    return (num >> 19) & 1;
}

int main()
{
    int num;
    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);

    if (is20thBitSet(num))
    {
        printf("20th bit is set (1)\n");
    }
    else
    {
        printf("20th bit is not set (0)\n");
    }

    return 0;
}