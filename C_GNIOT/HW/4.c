#include <stdio.h>
int main()
{
    int a;
    float b;
    printf("Enter float number : ");
    scanf("%f", &b);
    printf("Enter integer number : ");
    scanf("%d", &a);
    float result = a + b;
    printf("The sum is : %f", result);
    return 0;
}