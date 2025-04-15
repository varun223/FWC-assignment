#include <stdio.h>

#define SWAP(type, a, b) \
    do                   \
    {                    \
        type temp = a;   \
        a = b;           \
        b = temp;        \
    } while (0)

int main()
{
    int x = 10, y = 20;
    printf("Before swap: x=%d, y=%d\n", x, y);
    SWAP(int, x, y);
    printf("After swap: x=%d, y=%d\n", x, y);

    float a = 1.5, b = 2.5;
    printf("Before swap: a=%.2f, b=%.2f\n", a, b);
    SWAP(float, a, b);
    printf("After swap: a=%.2f, b=%.2f\n", a, b);

    char c1 = 'A', c2 = 'B';
    printf("Before swap: c1=%c, c2=%c\n", c1, c2);
    SWAP(char, c1, c2);
    printf("After swap: c1=%c, c2=%c\n", c1, c2);

    return 0;
}