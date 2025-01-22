#include <stdio.h>
int main()
{
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    int rem, sum, multiply, actualDecimal;
    actualDecimal = decimal;
    sum = 0;
    multiply = 1;
    while (decimal != 0)
    {
        rem = decimal % 8;
        sum += (multiply * rem);
        multiply *= 10;
        decimal /= 8;
    }
    printf("The Octal value of %d is %d", actualDecimal, sum);
    return 0;
}