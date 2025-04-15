#include <stdio.h>
#include <ctype.h>

int my_stricmp(char *s1, char *s2)
{
    while (*s1 && *s2)
    {
        if (tolower(*s1) != tolower(*s2))
        {
            break;
        }
        s1++;
        s2++;
    }
    return tolower(*s1) - tolower(*s2);
}

int main()
{
    char str1[] = "Apple";
    char str2[] = "apple";
    char str3[] = "Banana";

    printf("Compare '%s' and '%s': %d\n", str1, str2, my_stricmp(str1, str2));
    printf("Compare '%s' and '%s': %d\n", str1, str3, my_stricmp(str1, str3));

    return 0;
}