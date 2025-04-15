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

        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            printf("The given character '%c' is a vowel.\n", ch);
        }
        else
        {
            printf("The given character '%c' is not a vowel.\n", ch);
        }
        i++;
    }
    return 0;
}