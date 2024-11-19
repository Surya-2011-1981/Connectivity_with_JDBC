#include <stdio.h>
int main()
{
    float pi, r;
    printf("Enter radius : ");
    scanf("%f", &r);
    pi = 3.14;
    printf("Area of circle is : %f", (pi * (r * r)));
    return 0;
}