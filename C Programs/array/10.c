#include <stdio.h>

void swapArraysReverse(int arr1[], int arr2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int temp = arr1[i];
        arr1[i] = arr2[size - 1 - i];
        arr2[size - 1 - i] = temp;
    }
}

int main()
{
    int size = 5;
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};

    printf("Before swapping:\n");
    printf("array1: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr1[i]);
    printf("\narray2: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr2[i]);
    printf("\n");

    swapArraysReverse(arr1, arr2, size);

    printf("After swapping:\n");
    printf("array1: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr1[i]);
    printf("\narray2: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr2[i]);
    printf("\n");

    return 0;
}