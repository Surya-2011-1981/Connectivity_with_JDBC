#include <stdio.h>
#include <math.h>
int calculateGCD(int n1, int n2)
{
    int temp;

    // This is the Euclidean Method
    while (n2 != 0)
    {
        temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    return n1;
}

int main()
{
    int num1, num2, gcd;
    printf("Enter Any two Number : ");
    scanf("%d %d", &num1, &num2);
    gcd = calculateGCD(num1, num2);
    printf("\nThe GCD of %d and %d is : %d", num1, num2, gcd);
    return 0;
}