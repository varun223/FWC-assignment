#include <stdio.h>

int my_strncmp(char *s1, char *s2, int n)
{
    while (n-- && *s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    if (n < 0)
        return 0;
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int main()
{
    char str1[] = "apple";
    char str2[] = "appetizer";

    printf("Compare first 3 chars of '%s' and '%s': %d\n",
           str1, str2, my_strncmp(str1, str2, 3));
    printf("Compare first 5 chars of '%s' and '%s': %d\n",
           str1, str2, my_strncmp(str1, str2, 5));

    return 0;
}