#include <stdio.h>

char *my_strcat(char *d, char *s)
{
    char *dest = d;

    // Move to end of destination string
    while (*d != '\0')
    {
        d++;
    }

    // Copy source to end of destination
    while (*s != '\0')
    {
        *d = *s;
        d++;
        s++;
    }
    *d = '\0'; // Null-terminate

    return dest;
}

int main()
{
    char dest[50] = "Hello, ";
    char src[] = "World!";

    printf("Before concatenation: %s\n", dest);
    printf("After concatenation: %s\n", my_strcat(dest, src));
    return 0;
}