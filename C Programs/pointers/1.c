#include <stdio.h>

int main()
{
    int var = 10;
    int *ptr = &var;

    printf("Address of var: %p\n", &var);
    printf("Value of var: %d\n", var);
    printf("Size of var: %lu bytes\n", sizeof(var));

    printf("Address stored in ptr: %p\n", ptr);
    printf("Size of pointer: %lu bytes\n", sizeof(ptr));
    printf("Value pointed by ptr: %d\n", *ptr);

    return 0;
}