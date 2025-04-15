#include <stdio.h>
#include <stdlib.h>

int *mergeSortedArrays(int *arr1, int size1, int *arr2, int size2, int *resultSize)
{
    int i = 0, j = 0, k = 0;
    *resultSize = 0;

    // Calculate maximum possible size for result array
    int maxSize = size1 + size2;
    int *result = (int *)malloc(maxSize * sizeof(int));
    if (result == NULL)
    {
        return NULL;
    }

    // Merge arrays
    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            if (k == 0 || result[k - 1] != arr1[i])
            {
                result[k++] = arr1[i];
            }
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            if (k == 0 || result[k - 1] != arr2[j])
            {
                result[k++] = arr2[j];
            }
            j++;
        }
        else
        {
            if (k == 0 || result[k - 1] != arr1[i])
            {
                result[k++] = arr1[i];
            }
            i++;
            j++;
        }
    }

    // Add remaining elements from arr1
    while (i < size1)
    {
        if (k == 0 || result[k - 1] != arr1[i])
        {
            result[k++] = arr1[i];
        }
        i++;
    }

    // Add remaining elements from arr2
    while (j < size2)
    {
        if (k == 0 || result[k - 1] != arr2[j])
        {
            result[k++] = arr2[j];
        }
        j++;
    }

    *resultSize = k;
    return result;
}

int main()
{
    int arr1[] = {10, 12, 13, 14, 15, 16};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {9, 12, 15, 19, 20};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int resultSize;
    int *result = mergeSortedArrays(arr1, size1, arr2, size2, &resultSize);

    if (result != NULL)
    {
        printf("Merged array:\n");
        for (int i = 0; i < resultSize; i++)
        {
            printf("%d ", result[i]);
        }
        printf("\n");
        free(result);
    }
    else
    {
        printf("Memory allocation failed\n");
    }

    return 0;
}