#include <stdio.h>
void sum();
int main()
{
    printf("Code to learn Functions : ");
    printf("\nThis is  main() Function : ");
    sum();
    printf("\nBack to main() function");

    return 0;
}
void sum()
{
    int a, b;
    printf("\nThis is sum() function \nEnter two values : ");
    scanf("%d %d", &a, &b);
    printf("The Sum is %d ", (a + b));
    return;
    printf("\nEnd of sum()");
}