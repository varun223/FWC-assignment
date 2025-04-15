#include <stdio.h>

char *my_strstr(char *str, char *sub)
{
    if (*sub == '\0')
        return str;

    char *s1, *s2, *p;
    for (s1 = str; *s1 != '\0'; s1++)
    {
        p = s1;
        s2 = sub;
        while (*p && *s2 && (*p == *s2))
        {
            p++;
            s2++;
        }
        if (*s2 == '\0')
        {
            return s1;
        }
    }
    return NULL;
}

int main()
{
    char str[] = "Hello, World!";
    char sub[] = "World";

    char *result = my_strstr(str, sub);
    if (result != NULL)
    {
        printf("Found '%s' at position: %ld\n", sub, result - str);
    }
    else
    {
        printf("'%s' not found in string\n", sub);
    }

    return 0;
}