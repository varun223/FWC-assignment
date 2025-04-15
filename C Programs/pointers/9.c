#include <stdio.h>

int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int *ptr = arr;

    printf("Array elements and their addresses:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Address of arr[%d]: %p, Value: %d\n", i, (ptr + i), *(ptr + i));
    }

    return 0;
}