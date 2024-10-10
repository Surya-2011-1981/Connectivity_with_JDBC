// WAP in C to take the user input of three values and tell one by one , whether the entered value is even or odd.
#include <stdio.h>
int main()
{
    int num, value;
    for (num = 1; num <= 3; num++)
    {
        printf("Enter any Number : ");
        scanf("%d", &value);
        if (num % 2 == 0)
        {
            printf("%d is Even \n", value);
        }
        else
        {
            printf("%d is  Odd\n", value);
        }
    }

    return 0;
}
