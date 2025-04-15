#include <stdio.h>

int main()
{
    int var = 10;
    int *ptr1 = &var, *ptr2 = &var, *ptr3 = &var;

    printf("Initial value: %d\n", var);
    printf("ptr1: %d, ptr2: %d, ptr3: %d\n", *ptr1, *ptr2, *ptr3);

    var = 20;
    printf("\nAfter changing var directly:\n");
    printf("var: %d\n", var);
    printf("ptr1: %d, ptr2: %d, ptr3: %d\n", *ptr1, *ptr2, *ptr3);

    *ptr1 = 30;
    printf("\nAfter changing through ptr1:\n");
    printf("var: %d\n", var);
    printf("ptr1: %d, ptr2: %d, ptr3: %d\n", *ptr1, *ptr2, *ptr3);

    *ptr2 = 40;
    printf("\nAfter changing through ptr2:\n");
    printf("var: %d\n", var);
    printf("ptr1: %d, ptr2: %d, ptr3: %d\n", *ptr1, *ptr2, *ptr3);

    *ptr3 = 50;
    printf("\nAfter changing through ptr3:\n");
    printf("var: %d\n", var);
    printf("ptr1: %d, ptr2: %d, ptr3: %d\n", *ptr1, *ptr2, *ptr3);

    return 0;
}