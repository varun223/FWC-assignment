#include <stdio.h>

#define PRINT_ARRAY(arr, size, type)             \
    do                                           \
    {                                            \
        printf("Array elements: ");              \
        for (int i = 0; i < size; i++)           \
        {                                        \
            if (strcmp(type, "int") == 0)        \
            {                                    \
                printf("%d ", arr[i]);           \
            }                                    \
            else if (strcmp(type, "float") == 0) \
            {                                    \
                printf("%.2f ", arr[i]);         \
            }                                    \
            else if (strcmp(type, "char") == 0)  \
            {                                    \
                printf("%c ", arr[i]);           \
            }                                    \
        }                                        \
        printf("\n");                            \
    } while (0)

int main()
{
    int intArr[] = {1, 2, 3, 4, 5};
    float floatArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArr[] = {'a', 'b', 'c', 'd', 'e'};

    PRINT_ARRAY(intArr, 5, "int");
    PRINT_ARRAY(floatArr, 5, "float");
    PRINT_ARRAY(charArr, 5, "char");

    return 0;
}