#include <stdio.h>

int *squareStatic()
{
    static int num;
    if (num != 0)
    {
        printf("Square of %d is %d\n", num, num * num);
    }
    return &num;
}

int main()
{
    int arr[] = {2, 5, 8, 3, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        int *ptr = squareStatic();
        *ptr = arr[i];
        squareStatic();
    }

    return 0;
}