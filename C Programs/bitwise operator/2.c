#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num & 1)
    {
        printf("%d is ODD\n", num);
    }
    else
    {
        printf("%d is EVEN\n", num);
    }

    return 0;
}