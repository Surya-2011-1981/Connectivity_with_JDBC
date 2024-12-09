// #include <stdio.h>
// int main()
// {
//     int num1, num2, num3;
//     printf("Enter Three Numbers : ");
//     scanf("%d %d %d", &num1, &num2, &num3);

//     if (num1 > num2)
//     {
//         if (num1 > num3)
//         {
//             printf("%d is the largest number", num1);
//         }
//         else
//         {
//             printf("%d is the Largest number ", num3);
//         }
//     }
//     else if (num2 > num1)
//     {
//         if (num2 > num3)
//         {
//             printf("%d is the largest number", num2);
//         }
//         else
//         {
//             printf("%d is the Largest number ", num3);
//         }
//     }
//     else if (num3 > num1)
//     {
//         if (num3 > num2)
//         {
//             printf("%d is the largest number", num3);
//         }
//         else
//         {
//             printf("%d is the Largest number ", num2);
//         }
//     }
//     else if (num1 == num2 || num1 == num3 || num2 == num3)
//     {
//         if (num1 == num2)
//         {
//             if (num1 > num3)
//             {
//                 printf("%d is the largest numbers", num1);
//             }
//             else
//             {
//                 printf("%d is the largest numbers", num3);
//             }
//         }
//         else if (num1 == num3)
//         {
//             if (num1 > num2)
//             {
//                 printf("%d is the largest numbers", num1);
//             }
//             else
//             {
//                 printf("%d is the largest numbers", num2);
//             }
//         }
//         else if (num2 == num3)
//         {
//             if (num2 > num1)
//             {
//                 printf("%d is the largest numbers", num2);
//             }
//             else
//             {
//                 printf("%d is the largest numbers", num1);
//             }
//         }
//     }
//     else
//     {
//         printf("All numbers are equal");
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2)
    {
        if (num1 >= num3)
        {
            printf("%d is the largest number\n", num1);
        }
        else
        {
            printf("%d is the largest number\n", num3);
        }
    }
    else
    {
        if (num2 >= num3)
        {
            printf("%d is the largest number\n", num2);
        }
        else
        {
            printf("%d is the largest number\n", num3);
        }
    }

    return 0;
}
