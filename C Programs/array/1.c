#include <stdio.h>

int main()
{
    int arr[100];

    // Assign numbers 1-100
    for (int i = 0; i < 100; i++)
    {
        arr[i] = i + 1;
    }

    // Print all numbers
    printf("All numbers:\n");
    for (int i = 0; i < 100; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // Print even elements
    printf("Even elements:\n");
    for (int i = 0; i < 100; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n\n");

    // Print odd elements
    printf("Odd elements:\n");
    for (int i = 0; i < 100; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n\n");

    // Add 5 and print 6-105
    printf("Numbers after adding 5:\n");
    for (int i = 0; i < 100; i++)
    {
        printf("%d ", arr[i] + 5);
    }
    printf("\n");

    return 0;
}