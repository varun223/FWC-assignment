#include <stdio.h>

int findBiggest(int *a, int *b, int *c)
{
    if (*a >= *b && *a >= *c)
    {
        return *a;
    }
    else if (*b >= *a && *b >= *c)
    {
        return *b;
    }
    else
    {
        return *c;
    }
}

int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int biggest = findBiggest(&a, &b, &c);
    printf("Biggest number is %d\n", biggest);

    return 0;
}