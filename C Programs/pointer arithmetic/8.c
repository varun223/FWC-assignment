#include <stdio.h>
#include <ctype.h>

char *my_strlwr(char *s)
{
    char *p = s;
    while (*p != '\0')
    {
        *p = tolower(*p);
        p++;
    }
    return s;
}

int main()
{
    char str[] = "HELLO World!";
    printf("Original: %s\n", str);
    printf("Lowercase: %s\n", my_strlwr(str));
    return 0;
}