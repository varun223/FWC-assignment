#include <stdio.h>

void rotateThree(int *a, int *b, int *c)
{
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main()
{
    int x = 10, y = 20, z = 30;

    printf("Before rotation: x=%d, y=%d, z=%d\n", x, y, z);
    rotateThree(&x, &y, &z);
    printf("After rotation: x=%d, y=%d, z=%d\n", x, y, z);

    return 0;
}