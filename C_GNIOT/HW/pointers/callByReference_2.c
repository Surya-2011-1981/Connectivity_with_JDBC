#include <stdio.h>

// Function declarations
int add(int *a, int *b)
{
    return *a + *b;
}
int sub(int *a, int *b)
{
    return *a + *b;
}
int mul(int *a, int *b)
{
    return *a * *b;
}
float div(int *a, int *b)
{
    return *a / *b;
}

int main()
{
    int num1, num2;
    int sum;
    printf("Enter two values :");
    scanf("%d %d", &num1, &num2);
    sum = add(&num1, &num2);
    printf("%d", sum);
    return 0;
}
