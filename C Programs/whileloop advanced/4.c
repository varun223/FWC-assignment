#include <stdio.h>

int main()
{
    int n, current, previous, i = 1;
    printf("Enter n number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        scanf("%d", &current);

        if (i > 1)
        {
            if (current > previous)
            {
                printf("The given number is bigger than the previous number.\n");
            }
            else if (current < previous)
            {
                printf("The given number is smaller than the previous number.\n");
            }
            else
            {
                printf("The given number is equal to the previous number.\n");
            }
        }

        previous = current;
        i++;
    }
    return 0;
}