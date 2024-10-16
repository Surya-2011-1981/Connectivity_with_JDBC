#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2;
    char operation, choice;
    do
    {

        printf(" \nEnter First Number : ");
        scanf("%d", &num1);
        printf(" \nEnter Operation : ");
        scanf(" %c", &operation);
        printf("\n Enter Second Number :");
        scanf("%d", &num2);
        switch (operation)
        {
        case '+':
            printf("The Sum is : %d\n", (num1 + num2));
            break;
        case '-':
            printf("The Difference is : %d\n", abs(num1 - num2));
            break;
        case '*':
            printf("The Product is : %d\n", (num1 * num2));
            break;
        case '/':
            printf("The Quotient is : %d\n", (num1 / num2));
            break;
        default:
            printf("Wrong Choice\n");
            break;
        }
        printf("Do you want to continue... Y for yes N for No : ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
