#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Create first string and copy constant
    char *str1 = (char *)malloc(10 * sizeof(char));
    if (str1 == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    strcpy(str1, "Kernel");

    // Create second string
    char *str2 = (char *)malloc(10 * sizeof(char));
    if (str2 == NULL)
    {
        printf("Memory allocation failed\n");
        free(str1);
        return 1;
    }

    // Copy first string to second
    strcpy(str2, str1);

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    free(str1);
    free(str2);
    return 0;
}