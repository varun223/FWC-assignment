#include <stdio.h>

int multiplyBy9(int num)
{
    return (num << 3) + num; // 8n + n = 9n
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d * 9 = %d\n", num, multiplyBy9(num));
    return 0;
}