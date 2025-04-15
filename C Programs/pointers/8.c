#include <stdio.h>

void rotateValues(int *x, int *y, int *z)
{
    int temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;
}

int main()
{
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("Before rotation: x=%d, y=%d, z=%d\n", x, y, z);
    rotateValues(&x, &y, &z);
    printf("After rotation: x=%d, y=%d, z=%d\n", x, y, z);

    return 0;
}