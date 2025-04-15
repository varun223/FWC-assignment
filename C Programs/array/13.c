#include <stdio.h>

int areArraysEqual(int arr1[], int size1, int arr2[], int size2)
{
    if (size1 != size2)
        return 0;

    for (int i = 0; i < size1; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int size1, size2;
    printf("Enter size of first array: ");
    scanf("%d", &size1);

    int arr1[size1];
    printf("Enter %d elements for first array:\n", size1);
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &size2);

    int arr2[size2];
    printf("Enter %d elements for second array:\n", size2);
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    if (areArraysEqual(arr1, size1, arr2, size2))
    {
        printf("Arrays are equal\n");
    }
    else
    {
        printf("Arrays are not equal\n");
    }

    return 0;
}