// WAP to find length of String without using inbulid function
// WAP to reverse the string entered by the user
// WAP to concatenate two strings Without using inbuild function;
// WAP to to compare two strings by the  inbulid function for their equality

#include <stdio.h>
#include <string.h>
int strLength(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
int main()
{
    char st[20];
    printf("Enter Name : ");
    scanf("%s", &st);
    int lengthStr = strLength(st);
    printf("Length of string : %d", lengthStr);

    // String Reverse
    char chRev[20];
    for (int i = 0; i < lengthStr; i++)
    {
        chRev[i] = st[lengthStr - i - 1];
    }
    chRev[lengthStr] = '\0';
    printf("\nReverse String : %s\n", chRev);

    // Concatenate String
    char str1[20] = "Hello ";
    char str2[20] = "World";
    int lengthStr1 = strLength(str1);
    int lengthStr2 = strLength(str2);
    int lengthStr3 = lengthStr1 + lengthStr2;
    char str3[20];
    for (int i = 0; i < lengthStr1; i++)
    {
        str3[i] = str1[i];
    }
    for (int i = 0; i < lengthStr2; i++)
    {
        str3[lengthStr1 + i] = str2[i];
    }
    str3[lengthStr1 + lengthStr2] = '\0';
    printf("\nConcatenate String : %s\n", str3);

    // Compare strings
    char str4[20] = "Helloo";
    char str5[20] = "Hello";
    printf("\nThe comparision has value %d", !strcmp(str4, str5));
}