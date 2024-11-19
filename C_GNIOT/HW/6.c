#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter any two number : ");
    scanf("%d %d", &a, &b);
    int result = (a * a) + (b * b) + (2 * a * b);
    printf("The result is : %d", result);
    return 0;
}