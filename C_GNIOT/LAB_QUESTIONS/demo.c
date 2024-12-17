#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    // int a = 10;
    // int *ptr;
    // ptr = &a;
    // // printf("\n%p", ptr);

    // int **ptr2;
    // ptr2 = &ptr;
    // printf("%d  %d", *ptr, **ptr2);
    // printf("\n%p  %p", ptr, *ptr2);

    // **************** Revrsing String  ***************

    // char str[] = "Surya";
    // char revCh[20];
    // int lengthStr = strlen(str);
    // int j = lengthStr - 1;
    // for (int i = 0; i < lengthStr; i++)
    // {
    //     revCh[j] = str[i];
    //     j--;
    // }
    // revCh[lengthStr] = '\0';
    // // printf("The String after revrsing is : %s", revCh);
    // for (int i = 0; i < strlen(revCh); i++)
    // {
    //     printf("%c,", revCh[i]);
    // }
    // // printf("\n %d", strlen(str));
    // printf("\n%d", strlen(revCh));

    // **************** Revrsing String Using Pointers  ***************
    // char str[] = "a";
    // char *strPtr = str;
    // int len = strlen(str);
    // int i = len - 1;
    // char revStr[len];
    // do
    // {
    //     revStr[i] = *strPtr;
    //     i--;
    // } while (*(++strPtr) != '\0');
    // revStr[len] = '\0';
    // // printf("The Reversed string is : %s", revStr);
    // for (int i = 0; i < len; i++)
    // {
    //     printf("%c, ", revStr[i]);
    // }

    // Logic 2 *************

    char str[100]; // Declare an array to store the string
    char *start, *end, temp;

    // Prompt the user to enter a string
    printf("Enter a string: ");
    scanf("%99s", str); // Reads a string safely

    // Initialize pointers
    start = str; // Start points to the beginning of the string
    end = str;   // End will move to the last character

    // Move 'end' pointer to the last character of the string
    while (*end != '\0')
    {
        end++;
    }
    end--; // Move back to the last valid character (ignoring null terminator)

    // Swap characters using two pointers
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        // Move pointers towards the center
        start++;
        end--;
    }

    // Print the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}