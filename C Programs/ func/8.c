#include <stdio.h>
#include <ctype.h>

int fun_alpha_num(char c)
{
    return isalnum(c) ? 1 : 0;
}

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (fun_alpha_num(ch))
    {
        printf("The character '%c' is alphanumeric.\n", ch);
    }
    else
    {
        printf("The character '%c' is not alphanumeric.\n", ch);
    }
    return 0;
}