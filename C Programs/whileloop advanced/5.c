#include <stdio.h>

int main()
{
    int n, current, previous, count = 0, i = 1;
    printf("Enter n number: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    while (i <= n)
    {
        scanf("%d", &current);

        if (i == 1)
        {
            previous = current;
            count++;
        }
        else
        {
            if (current > previous)
            {
                count++;
                previous = current;
            }
        }
        i++;
    }

    printf("The count is %d\n", count);
    return 0;
}