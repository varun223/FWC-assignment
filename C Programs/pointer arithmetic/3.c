#include <stdio.h>

char *my_strcpy(char *d, char *s)
{
    char *dest = d;
    while (*s != '\0')
    {
        *d = *s;
        d++;
        s++;
    }
    *d = '\0'; // Null-terminate the destination
    return dest;
}

int main()
{
    char src[] = "Copy this string";
    char dest[50];

    printf("Source: %s\n", src);
    printf("After copy: %s\n", my_strcpy(dest, src));
    return 0;
}