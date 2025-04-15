#include <stdio.h>
#include <ctype.h>

#define IS_ALNUM(c) (isalnum(c) ? "alphanumeric" : "special character")

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("The character '%c' is a %s\n", ch, IS_ALNUM(ch));

    return 0;
}