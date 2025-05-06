#include <stdio.h>
int main()
{
    int preCount = 0, nextCount = 0;
    int num, divisor;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a divisor: ");
    scanf("%d", &divisor);
    int rem = num % divisor;

    if (rem == 0)
    {
        printf("The number is already a multiple of the divisor.\n");
    }
    else
    {
        if (rem <= divisor / 2)
        {
            printf("The Nearest multiple is : %d", (num - rem));
        }
        else
        {
            printf("The Nearest multiple is %d", (num + (divisor - rem)));
        }
    }
    return 0;
}
