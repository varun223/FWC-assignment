#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_itoa(int num)
{
    // Count digits
    int digits = 0;
    int temp = num;
    do
    {
        digits++;
        temp /= 10;
    } while (temp != 0);

    // Allocate memory for string (digits + 1 for null terminator)
    char *str = (char *)malloc((digits + 1) * sizeof(char));
    if (str == NULL)
    {
        return NULL;
    }

    // Convert digits to characters
    str[digits] = '\0';
    for (int i = digits - 1; i >= 0; i--)
    {
        str[i] = '0' + (num % 10);
        num /= 10;
    }

    return str;
}

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    char *str = my_itoa(num);
    if (str != NULL)
    {
        printf("String representation: %s\n", str);
        free(str);
    }
    else
    {
        printf("Memory allocation failed\n");
    }

    return 0;
}