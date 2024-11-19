#include <stdio.h>

int main()
{
    float principal, rate, time, simpleInterest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (per year): ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    printf("The Simple Interest is: %.2f\n", simpleInterest);

    return 0;
}