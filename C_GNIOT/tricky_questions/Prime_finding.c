#include <stdio.h>
int main()
{
    int num, i, count;
    i = 2;
    count = 0;
    printf("Enter any number : ");
    scanf("%d", &num);
    // while (i <= num)
    // {
    //     if (num % i == 0)
    //     {
    //         count++;
    //         printf("The entered number is Composite ");
    //         break;
    //     }
    //     i++;
    // }
    // if (count == 0)
    // {
    //     printf("The entered number is Prime ");
    // }

    while (i < num)
    {
        if (num % i == 0)
        {
            printf("Composite");
            break;
        }
        else
        {
            if (i == (num - 1))
            {
                printf("Prime");
            }
        }
        i++;
    }
    return 0;
}