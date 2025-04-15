#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[10];

    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int max = INT_MIN, min = INT_MAX;
    int maxIndex = -1, minIndex = -1;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            minIndex = i;
        }
    }

    printf("Biggest number: %d at index %d\n", max, maxIndex);
    printf("Smallest number: %d at index %d\n", min, minIndex);

    return 0;
}