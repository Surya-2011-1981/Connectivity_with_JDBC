#include <stdio.h>
int add(int a, int b)
{
    while (b != 0)
    {
        // Calculate the carry
        int carry = a & b;

        // Sum without carry using XOR
        a = a ^ b;

        // Shift the carry left by 1 to add it to the next significant bit
        b = carry << 1;
    }
    return a;
}

int main()
{
    int num1, num2, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = add(num1, num2);

    printf("Sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
