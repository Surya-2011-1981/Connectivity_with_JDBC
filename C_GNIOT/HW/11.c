#include <stdio.h>
int main()
{
    int a;
    printf("Enter any  number : ");
    scanf("%d", &a);
    int firstDigit = a % 10;
    a = a / 10;
    int secondDigit = a % 10;
    printf("First and Second digit are respectively : %d and %d", firstDigit, secondDigit);
    printf("\n Sum of the digits are : %d", (firstDigit + secondDigit));
    return 0;
}