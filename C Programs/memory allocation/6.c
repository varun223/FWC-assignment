#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concatChars(char *str1, char *str2, int n, int m)
{
    // Allocate memory for new string
    char *result = (char *)malloc((n + m + 1) * sizeof(char));
    if (result == NULL)
    {
        return NULL;
    }

    // Copy first n characters from str1
    strncpy(result, str1, n);
    result[n] = '\0';

    // Concatenate first m characters from str2
    strncat(result, str2, m);

    return result;
}

int main()
{
    char str1[] = "kernel masters";
    char str2[] = "raayan systems";
    int n = 3, m = 5;

    char *result = concatChars(str1, str2, n, m);
    if (result != NULL)
    {
        printf("Concatenated string: %s\n", result);
        free(result);
    }
    else
    {
        printf("Memory allocation failed\n");
    }

    return 0;
}