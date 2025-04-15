#include <stdio.h>
#include <stdlib.h>

int main()
{
    size_t size = 1;
    void *ptr = NULL;

    // Keep allocating memory until malloc fails
    while (1)
    {
        ptr = malloc(size);
        if (ptr == NULL)
        {
            printf("malloc() failed after allocating %lu bytes\n", size - 1);
            break;
        }
        free(ptr);
        size *= 2;
    }

    return 0;
}