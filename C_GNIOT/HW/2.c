#include <stdio.h>
int main()
{
    int a;
    printf("Enter any  number : ");
    scanf("%d %d", &a);
    printf(" Complement is : %d", (~a));
    return 0;
}