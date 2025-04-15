#include <stdio.h>

int main()
{
    int *intPtr;
    char *charPtr;
    float *floatPtr;
    double *doublePtr;

    printf("Size of int pointer: %lu bytes\n", sizeof(intPtr));
    printf("Size of char pointer: %lu bytes\n", sizeof(charPtr));
    printf("Size of float pointer: %lu bytes\n", sizeof(floatPtr));
    printf("Size of double pointer: %lu bytes\n", sizeof(doublePtr));

    return 0;
}