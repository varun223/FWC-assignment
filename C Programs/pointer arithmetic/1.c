#include <stdio.h>

int my_strlen(char *s)
{
    char *p = s;
    while (*p != '\0')
    {
        p++;
    }
    return p - s;
}

int main()
{
    char str[] = "Hello, World!";
    printf("Length of '%s': %d\n", str, my_strlen(str));
    return 0;
}