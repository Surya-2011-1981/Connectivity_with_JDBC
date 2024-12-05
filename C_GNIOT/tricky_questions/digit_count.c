#include <stdio.h>
int main()
{
    int num, digit;
    digit = 0;
    printf("Enter Binary Number\n");
    scanf("%d", &num);
    while (num!= 0)
    {
        digit++;
        num /= 10;
    }
    printf("The Number Of Digits are : %d", digit);
    return 0;
}