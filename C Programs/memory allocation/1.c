#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter an integer: ");
    scanf("%d", ptr);

    printf("Value entered: %d\n", *ptr);

    free(ptr);
    return 0;
}