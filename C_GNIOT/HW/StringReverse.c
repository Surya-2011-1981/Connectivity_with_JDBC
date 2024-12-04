// #include <stdio.h>
// #include <string.h>
// char *reverseString(char str[30])
// {
//     int length = strlen(str);
//     printf(1);
//     char revStr[30];
//     printf(2);
//     for (int i = 0; i < length; i++)
//     {
//         revStr[length - i - 1] = str[i];
//     }
//     printf(3);
//     revStr[length] = '\0';
//     printf(4);
//     return revStr;
// }
// int main()
// {
//     char str[30];
//     printf("Enter the string : ");
//     scanf("%s", &str);
//     printf("\nString is : %s ", str);
//     printf(1);
//     printf("\nReversed String is : %s ", reverseString(str));
//     return 0;
// }

#include <stdio.h>
#include <string.h>

char *reverseString(char str[30])
{
    static char revStr[30]; // Static array to persist after function returns
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        revStr[length - i - 1] = str[i];
    }
    revStr[length] = '\0';
    return revStr; // Return the static array
}

int main()
{
    char str[30];
    printf("Enter the string: ");
    scanf("%s", str);

    printf("\nOriginal String: %s", str);
    printf("\nReversed String: %s\n", reverseString(str));

    return 0;
}
