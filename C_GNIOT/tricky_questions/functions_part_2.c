// Write a C program to understand the compiler execution of functions by the user annd also perform addition of two numbers using user-defined function

#include <stdio.h>
void sum();
int main()
{
    printf("Code To Learn function \n");
    printf("This is begening of main() function \n");
    sum();
    printf("This is end of main() function\n");
    return 0;
}
void sum()
{
    int a, b;
    printf("This is begening of sum() function\nEnter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("The sum is : %d\n", (a + b));
    printf("This is End of sum() function\n");
}