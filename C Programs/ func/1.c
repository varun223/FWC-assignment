#include <stdio.h>

float calculateSimpleInterest(float principal, float rate, float time)
{
    return (principal * rate * time) / 100;
}

int main()
{
    float p, r, t;
    printf("Enter principal amount: ");
    scanf("%f", &p);
    printf("Enter rate of interest: ");
    scanf("%f", &r);
    printf("Enter time (in years): ");
    scanf("%f", &t);

    float interest = calculateSimpleInterest(p, r, t);
    printf("Simple Interest: %.2f\n", interest);
    printf("Total Amount: %.2f\n", p + interest);

    return 0;
}