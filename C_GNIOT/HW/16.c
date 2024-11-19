#include <stdio.h>
int main()
{
    float a;
    printf("Enter any  number : ");
    scanf("%f", &a);
    int part = (int)a;
    printf(" Fractional part is : %f", (a - part));
    return 0;
}