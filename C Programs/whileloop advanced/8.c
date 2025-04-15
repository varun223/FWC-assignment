#include <stdio.h>

int main()
{
    int n, i = 1, topper_id = 1;
    float max_percentage = 0.0;
    printf("Enter n students: ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("Enter %d student 6 subjects marks:\n", i);
        int j = 1, total = 0, mark;

        while (j <= 6)
        {
            scanf("%d", &mark);
            total += mark;
            j++;
        }

        float percentage = (float)total / 6;
        printf("Student %d percentage is: %.2f%%\n", i, percentage);

        if (percentage > max_percentage)
        {
            max_percentage = percentage;
            topper_id = i;
        }
        i++;
    }

    printf("Topper student ID is %d\n", topper_id);
    return 0;
}