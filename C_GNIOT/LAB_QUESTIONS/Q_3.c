#include <stdio.h>
int main()
{
    int num1, num2, num3;
    float avg;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    avg = (float)(num1 + num2 + num3) / 3;
    printf("\nThe average is : %f", avg);
    return 0;
}