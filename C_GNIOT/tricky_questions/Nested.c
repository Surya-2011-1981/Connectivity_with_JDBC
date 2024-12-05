// check divisiblity user input number by 5 and 10 if the number id even and 3 and 7

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Number is even ");
        if (num % 10 == 0)
        {
            printf(" and divisibe by 5 and 10 ");
        }
        else
        {
            printf(" but Not divisible by 5 and 10");
        }
    }
    else
    {
        printf("Number is odd");
        if (num % 21 == 0)
        {
            printf(" and divisible by 3 and 7");
        }
        else
        {
            printf(" but Not divisible by 3 and 7 ");
        }
    }
    return 0;
}
