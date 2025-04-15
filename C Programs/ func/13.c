#include <stdio.h>

int compareDates(int d1, int m1, int y1, int d2, int m2, int y2)
{
    if (y1 < y2)
        return 1;
    if (y1 > y2)
        return 2;
    if (m1 < m2)
        return 1;
    if (m1 > m2)
        return 2;
    if (d1 < d2)
        return 1;
    if (d1 > d2)
        return 2;
    return 0; // dates are equal
}

int main()
{
    int d1, m1, y1, d2, m2, y2;
    printf("Enter first date (dd mm yyyy): ");
    scanf("%d %d %d", &d1, &m1, &y1);
    printf("Enter second date (dd mm yyyy): ");
    scanf("%d %d %d", &d2, &m2, &y2);

    int result = compareDates(d1, m1, y1, d2, m2, y2);
    if (result == 1)
    {
        printf("First date is older\n");
    }
    else if (result == 2)
    {
        printf("Second date is older\n");
    }
    else
    {
        printf("Both dates are same\n");
    }
    return 0;
}