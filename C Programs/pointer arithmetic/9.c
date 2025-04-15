#include <stdio.h>

char *my_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
        {
            return s;
        }
        s++;
    }
    return NULL;
}

int main()
{
    char str[] = "Hello, World!";
    char ch = 'W';

    char *result = my_strchr(str, ch);
    if (result != NULL)
    {
        printf("Found '%c' at position: %ld\n", ch, result - str);
    }
    else
    {
        printf("'%c' not found in string\n", ch);
    }

    return 0;
}