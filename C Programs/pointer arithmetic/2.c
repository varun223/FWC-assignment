#include <stdio.h>

char *my_strrev(char *s)
{
    char *start = s;
    char *end = s;

    // Move end to the end of the string
    while (*end != '\0')
    {
        end++;
    }
    end--; // Point to last character before null terminator

    // Reverse the string
    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    return s;
}

int main()
{
    char str[] = "Hello";
    printf("Original: %s\n", str);
    printf("Reversed: %s\n", my_strrev(str));
    return 0;
}