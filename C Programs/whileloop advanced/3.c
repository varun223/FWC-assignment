#include <stdio.h>
#include <ctype.h>

int main()
{
    int n, i = 1;
    char ch;
    printf("Enter n characters: ");
    scanf("%d", &n);
    getchar(); // To consume the newline

    while (i <= n)
    {
        printf("Enter a character: ");
        scanf("%c", &ch);
        getchar(); // To consume the newline

        if (isupper(ch))
        {
            printf("The given character '%c' is a Capital alphabet.\n", ch);
        }
        else if (islower(ch))
        {
            printf("The given character '%c' is a small alphabet.\n", ch);
        }
        else if (isdigit(ch))
        {
            printf("The given character '%c' is a numeric character.\n", ch);
        }
        else
        {
            printf("The given character '%c' is a special character.\n", ch);
        }
        i++;
    }
    return 0;
}