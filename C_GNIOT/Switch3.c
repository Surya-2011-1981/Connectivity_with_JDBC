// WAP in C using switch to perform basic calculator operation , which executes +,-,* and / on two numbers of user input based on the user choice

#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Variable Declaration
    int num1, num2;
    char choice;


    printf("Enter First Number  : ");
    scanf("%d", &num1);// Input First Number
    printf("\nEnter Operation : ");
    scanf(" %c", &choice);// Input operation
    printf("\nEnter Second Number  : ");
    scanf("%d", &num2);//Input Second Number
    switch (choice)
    {
    case '+':
        printf("\n Addition of %d and %d is : %d", num1, num2, (num1 + num2));//Printing  Sum
        break;
    case '-':
        printf("\n Difference of %d and %d is : %d", num1, num2, abs(num1 - num2));//Printing  Difference
        break;
    case '*':
        printf("\n Product of %d and %d is : %d", num1, num2, (num1 * num2));//Printing  Product
        break;
    case '/':
        printf("\n Quotient of %d and %d is : %f", num1, num2, ((float)num1 / (float)num2));//Printing  Quotient
        break;
    default:
        printf("\nInvalid choice");
    }
    return 0;
}