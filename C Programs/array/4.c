#include <stdio.h>

int main()
{
    // Experiment with different array declarations
    int arr1[5] = {};               // All elements initialized to 0
    int arr2[10] = {2.4, 5.6, 7.3}; // Values truncated to int, rest 0
    // int arr3[3] = {1,2,3,4,5}; // Error: too many initializers
    // int arr4[0] = {}; // Zero-sized array
    // int arr5[0] = {1,2,3,4,5}; // Error: zero-sized array with initializers
    // int arr6[] = {}; // Error: empty initializer for array of unknown size
    int arr7['a']; // Size based on ASCII value of 'a' (97)

    printf("Size of arr1: %lu\n", sizeof(arr1));
    printf("Size of arr2: %lu\n", sizeof(arr2));
    printf("Size of arr7: %lu\n", sizeof(arr7));

    // Try to read and print values
    printf("arr1 elements:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("arr2 elements:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}