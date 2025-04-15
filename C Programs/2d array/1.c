#include <stdio.h>

#define ITEMS 3
#define SALESMEN 2

int main()
{
    int sales[ITEMS][SALESMEN];

    // Input sales data
    for (int i = 0; i < ITEMS; i++)
    {
        printf("Enter sales for item %d:\n", i + 1);
        for (int j = 0; j < SALESMEN; j++)
        {
            printf("Salesman %d: ", j + 1);
            scanf("%d", &sales[i][j]);
        }
    }

    // Print matrix
    printf("\nSales Matrix:\n");
    for (int i = 0; i < ITEMS; i++)
    {
        for (int j = 0; j < SALESMEN; j++)
        {
            printf("%d\t", sales[i][j]);
        }
        printf("\n");
    }

    // Total sales by each salesman
    for (int j = 0; j < SALESMEN; j++)
    {
        int total = 0;
        for (int i = 0; i < ITEMS; i++)
        {
            total += sales[i][j];
        }
        printf("\nTotal sales by salesman %d: %d", j + 1, total);
    }

    // Total sales for each item
    for (int i = 0; i < ITEMS; i++)
    {
        int total = 0;
        for (int j = 0; j < SALESMEN; j++)
        {
            total += sales[i][j];
        }
        printf("\nTotal sales for item %d: %d", i + 1, total);
    }

    // Total sales
    int grandTotal = 0;
    for (int i = 0; i < ITEMS; i++)
    {
        for (int j = 0; j < SALESMEN; j++)
        {
            grandTotal += sales[i][j];
        }
    }
    printf("\n\nTotal sales: %d\n", grandTotal);

    return 0;
}