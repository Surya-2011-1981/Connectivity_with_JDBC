#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter any two number : ");
    scanf("%d %d", &a, &b);
    printf("\nValues before swap %d, %d", a, b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Values after swap %d, %d", a, b);
    return 0;
}