#include <stdio.h>

int main()
{
    char name[] = {'J', 'o', 'h', 'n', ' ', 'D', 'o', 'e', '\0'};

    printf("Name using for loop:\n");
    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("%c", name[i]);
    }
    printf("\n");

    return 0;
}