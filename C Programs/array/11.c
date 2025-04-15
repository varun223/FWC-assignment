#include <stdio.h>

float averageMarks(int marks[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += marks[i];
    }
    return (float)sum / size;
}

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    int marks[n];
    printf("Enter marks for %d students:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }

    printf("Average marks: %.2f\n", averageMarks(marks, n));
    return 0;
}