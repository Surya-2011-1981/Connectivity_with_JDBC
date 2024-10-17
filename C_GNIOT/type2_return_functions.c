#include <stdio.h>
int sum();
int main()
{
    printf("Code to learn Functions : ");
    printf("\nThis is  main() Function : ");
    printf("The sum is : %d", sum());
    printf("\nBack to main() function");

    return 0;
}
int sum()
{
    int a, b;
    printf("\nThis is sum() function \nEnter two values : ");
    scanf("%d %d", &a, &b);
    // printf("The Sum is %d ", (a + b));
    printf("\nEnd of sum()");
    return (a + b);
}