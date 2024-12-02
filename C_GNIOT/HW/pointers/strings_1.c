#include <stdio.h>
#include <string.h>
// char *strRev(char ch[])
// {
//     char rev[100];
//     rev[100] = ch;
//     int len = strlen(ch);
//     for (int i = 0; i < len; i++)
//     {
//         rev[i] = ch[len];
//         len--;
//     }
//     return rev;
// }

int main()
{
    //  *************  Reverse a function *************

    // char str[100];
    // printf("Enter String ");
    // fgets(str, sizeof(str), stdin);
    // printf("%s", strrev(str));

    // ********************  Inbuild function ***************
    char ch[] = "Surya";
    char ch2[] = "Suraj";
    // printf("%d", strcmp(ch, ch2));
    // printf("\n%s", strcpy(ch, ch2));
    // printf("\n%d", strlen(ch));
    // printf("\n%s", strcat(ch, ch2));
    // printf("\n%d", strrev(ch));

    // *************  case Based functions

    // printf("%d", isupper(ch[0]));
    // printf("\n%d", islower(ch[0]));
    // printf("\n%c", tolower(ch[0]));
    // printf("\n%c", toupper('s'));

    //  *****************  ******************

    for (int i = 0; i < strlen(ch); i++)
    {
        ch[i] = toupper(ch[i]);
        // printf("%c", ch[i]);
    }
    printf("\n%s", ch);

    return 0;
}