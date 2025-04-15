#include <stdio.h>

int daysInMonth(int month, int year)
{
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    case 2:
        return isLeapYear(year) ? 29 : 28;
    default:
        return 0; // Invalid month
    }
}

int main()
{
    int month, year;
    printf("Enter month (1-12) and year: ");
    scanf("%d %d", &month, &year);

    int days = daysInMonth(month, year);
    if (days == 0)
    {
        printf("Invalid month entered.\n");
    }
    else
    {
        printf("Number of days in month %d of year %d: %d\n", month, year, days);
    }
    return 0;
}