#include <stdio.h>
int main()
{
    int a;
    printf("Enter any  number : ");
    scanf("%d", &a);
    printf("Digits from last to first are : ");
    while (a > 0)
    {
        printf("%d\t", a % 10);
        a = a / 10;
    }
    return 0;
}