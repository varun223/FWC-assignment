#include <stdio.h>
#include <limits.h>

int countMaxOccurrences(int arr[], int size)
{
    int max = INT_MIN;
    int count = 0;

    // Find the maximum value
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Count occurrences of max value
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == max)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count = countMaxOccurrences(arr, size);
    printf("Biggest number is repeated %d times\n", count);

    return 0;
}