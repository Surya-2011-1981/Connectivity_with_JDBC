#include <stdio.h>
int sum(int a, int b)
{
    int carry;
    while (b != 0)
    {
        carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}
int main()
{
    int a, b;
    printf("Enter any two Numbers : ");
    scanf("%d %d", &a, &b);
    printf("The sum is : %d", sum(a, b));
}