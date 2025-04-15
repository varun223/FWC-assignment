#include <stdio.h>

int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    float arr[size];

    // Initialize with some values
    for (int i = 0; i < size; i++)
    {
        arr[i] = i * 1.5;
    }

    // Take user input
    printf("Enter %d float values:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%f", &arr[i]);
    }

    // Print array elements
    printf("Array elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    return 0;
}