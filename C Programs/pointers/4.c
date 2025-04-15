#include <stdio.h>

int main()
{
    int a = 10, b = 20, c = 30;
    int *ptr;

    ptr = &a;
    printf("Value of a: %d\n", *ptr);

    ptr = &b;
    printf("Value of b: %d\n", *ptr);

    ptr = &c;
    printf("Value of c: %d\n", *ptr);

    return 0;
}