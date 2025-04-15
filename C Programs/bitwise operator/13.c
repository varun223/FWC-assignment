#include <stdio.h>

unsigned int setbits(unsigned int x, int p, int n, unsigned int y)
{
    // Create mask to clear n bits starting at p in x
    unsigned int mask = ~(~0 << n) << (p - n + 1);
    x &= ~mask;

    // Get rightmost n bits of y and position them at p
    unsigned int bits = (y & ~(~0 << n)) << (p - n + 1);

    return x | bits;
}

void printBinary(unsigned int num)
{
    for (int i = 31; i >= 0; i--)
    {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main()
{
    unsigned int x = 0b10101010; // 170
    unsigned int y = 0b10100111; // 167
    int n = 3, p = 6;

    printf("x = ");
    printBinary(x);
    printf("y = ");
    printBinary(y);

    unsigned int result = setbits(x, p, n, y);
    printf("setbits n = %d, p = %d gives x = ", n, p);
    printBinary(result);

    return 0;
}