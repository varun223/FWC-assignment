#include <stdio.h>

#define MAX_NAMES 5
#define MAX_LENGTH 20

int main()
{
    char names[MAX_NAMES][MAX_LENGTH];

    printf("Enter %d names:\n", MAX_NAMES);
    for (int i = 0; i < MAX_NAMES; i++)
    {
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    printf("\nNames entered:\n");
    for (int i = 0; i < MAX_NAMES; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}