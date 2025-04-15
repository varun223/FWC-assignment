#include <stdio.h>

int main()
{
    char ch1, ch2;
    printf("Enter two characters: ");
    scanf(" %c %c", &ch1, &ch2); // Note the space before %c to skip whitespace

    char *ptr1 = &ch1;
    char *ptr2 = &ch2;

    if (*ptr1 > *ptr2)
    {
        printf("'%c' has higher ASCII value than '%c'\n", ch1, ch2);
    }
    else if (*ptr1 < *ptr2)
    {
        printf("'%c' has higher ASCII value than '%c'\n", ch2, ch1);
    }
    else
    {
        printf("Both characters have same ASCII value\n");
    }

    return 0;
}