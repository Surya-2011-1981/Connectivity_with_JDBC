// Write a C Program to find the greatest number among the three user input values

#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    // if (num1 > num2)
    // {
    //     if (num1 > num3)
    //     {
    //         printf("%d is greatest", num1);
    //     }
    // }

    // else if (num2 > num1)
    // {
    //     if (num2 > num3)
    //     {
    //         printf("%d is greatest", num2);
    //     }
    // }
    // if (num3 > num2)
    // {
    //     if (num3 > num1)
    //     {

    //         printf("%d is greatest", num3);
    //     }
    // }

    // if (num1 < num2)
    // {
    //     if (num2 < num3)
    //     {
    //         printf("%d ", num3);
    //     }
    // }
    // else if (num2 < num3)
    // {
    //     if (num3 < num1)
    //     {
    //         printf("%d", num1);
    //     }
    // }
    // else if (num3 < num1)
    // {
    //     if (num1 < num2)
    //     {
    //         printf("%d", num2);
    //     }
    // }

    if (num1 > num2 && num1 > num3)
    {
        printf("%d", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("%d", num2);
    }
    else
    {

        printf("%d", num3);
    }
    return 0;
}