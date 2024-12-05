#include <stdio.h>
int main()
{
    int num1, num2;
    int sum, product;
    printf("Enter two Numbers : ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    product = num1 * num2;
    printf("\nSum of %d and %d is : %d", num1, num2, sum);
    printf("\nSum of %d and %d is : %d", num1, num2, product);
    return 0;
}