#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter any two number : ");
    scanf("%d %d", &a, &b);
    printf("\nThe result is : %d", (a & b));
    return 0;
}