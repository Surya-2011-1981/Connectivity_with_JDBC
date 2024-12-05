#include <stdio.h>
int main()
{
    int num1, num2;
    num1 = 10;
    num2 = 20;
    printf("Values Before Swapping : Num1 = %d and Num2 = %d", num1, num2);
    num1 = num1 + num2; // num1=30
    num2 = num1 - num2; // num2=10
    num1 = num1 - num2; // num1=20
    printf("\nValues After Swapping : Num1 = %d and Num2 = %d", num1, num2);
    return 0;
}