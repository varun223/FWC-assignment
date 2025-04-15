#include <stdio.h>

int isPowerOfTwo(int num)
{
    return num && !(num & (num - 1));
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPowerOfTwo(num))
    {
        printf("%d is a power of 2\n", num);
    }
    else
    {
        printf("%d is not a power of 2\n", num);
    }

    return 0;
}