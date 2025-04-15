#include <stdio.h>

int isValidDate(int d, int m, int y)
{
    if (y < 1 || m < 1 || m > 12 || d < 1)
        return 0;

    int maxDays;
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        maxDays = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        maxDays = 30;
        break;
    case 2:
        maxDays = ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0) ? 29 : 28);
        break;
    default:
        return 0;
    }

    return d <= maxDays ? 1 : 0;
}

int main()
{
    int d, m, y;
    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &d, &m, &y);

    if (isValidDate(d, m, y))
    {
        printf("Date is valid\n");
    }
    else
    {
        printf("Date is invalid\n");
    }
    return 0;
}