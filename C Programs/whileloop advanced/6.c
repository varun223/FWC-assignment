#include <stdio.h>
#include <limits.h>

int main()
{
    int n, num, smallest = INT_MAX, i = 1;
    printf("Enter n number: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    while (i <= n)
    {
        scanf("%d", &num);

        if (num < smallest)
        {
            smallest = num;
        }
        i++;
    }

    printf("The smallest number is %d.\n", smallest);
    return 0;
}