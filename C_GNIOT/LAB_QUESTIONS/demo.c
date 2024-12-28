// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     // int a = 10;
//     // int *ptr;
//     // ptr = &a;
//     // // printf("\n%p", ptr);

//     // int **ptr2;
//     // ptr2 = &ptr;
//     // printf("%d  %d", *ptr, **ptr2);
//     // printf("\n%p  %p", ptr, *ptr2);

//     // **************** Revrsing String  ***************

//     // char str[] = "Surya";
//     // char revCh[20];
//     // int lengthStr = strlen(str);
//     // int j = lengthStr - 1;
//     // for (int i = 0; i < lengthStr; i++)
//     // {
//     //     revCh[j] = str[i];
//     //     j--;
//     // }
//     // revCh[lengthStr] = '\0';
//     // // printf("The String after revrsing is : %s", revCh);
//     // for (int i = 0; i < strlen(revCh); i++)
//     // {
//     //     printf("%c,", revCh[i]);
//     // }
//     // // printf("\n %d", strlen(str));
//     // printf("\n%d", strlen(revCh));

//     // **************** Revrsing String Using Pointers  ***************
//     // char str[] = "a";
//     // char *strPtr = str;
//     // int len = strlen(str);
//     // int i = len - 1;
//     // char revStr[len];
//     // do
//     // {
//     //     revStr[i] = *strPtr;
//     //     i--;
//     // } while (*(++strPtr) != '\0');
//     // revStr[len] = '\0';
//     // // printf("The Reversed string is : %s", revStr);
//     // for (int i = 0; i < len; i++)
//     // {
//     //     printf("%c, ", revStr[i]);
//     // }

//     // Logic 2 *************

//     // char str[100]; // Declare an array to store the string
//     // char *start, *end, temp;

//     // // Prompt the user to enter a string
//     // printf("Enter a string: ");
//     // scanf("%99s", str); // Reads a string safely

//     // // Initialize pointers
//     // start = str; // Start points to the beginning of the string
//     // end = str;   // End will move to the last character

//     // // Move 'end' pointer to the last character of the string
//     // while (*end != '\0')
//     // {
//     //     end++;
//     // }
//     // end--; // Move back to the last valid character (ignoring null terminator)

//     // // Swap characters using two pointers
//     // while (start < end)
//     // {
//     //     temp = *start;
//     //     *start = *end;
//     //     *end = temp;

//     //     // Move pointers towards the center
//     //     start++;
//     //     end--;
//     // }

//     // // Print the reversed string
//     // printf("Reversed string: %s\n", str);

//     // ************* Dynamic Memory Allocation *********
//     // int lengthOfArr = 4;
//     // int arr[lengthOfArr];
//     // int *ptr = (int *)malloc(sizeof(int) * lengthOfArr);
//     // if (ptr == NULL)
//     // {
//     //     printf("Memory Not allocated");
//     //     return 1;
//     // }
//     // printf("\nEnter Array Elements : ");
//     // for (int i = 0; i < lengthOfArr; i++)
//     // {
//     //     scanf("%d", &arr[i]);
//     // }

//     // // Using Realloc

//     // int extraElements = 3;
//     // int *ptr2 = (int *)realloc(ptr, sizeof(int) * extraElements);
//     // printf("\n Enter extra Elements : ");
//     // for (int i = lengthOfArr; i < (lengthOfArr + extraElements); i++)
//     // {
//     //     scanf("%d", &arr[i]);
//     // }
//     // printf("\nModified Array elements are : ");
//     // for (int i = 0; i < (lengthOfArr + extraElements); i++)
//     // {
//     //     printf("%d ,", arr[i]);
//     // }
//     // free(ptr);
//     // free(ptr2);

//     return 0;
// }

// #include <stdio.h>

// struct Data
// {
//     int i;
//     float f;
//     char c;
// };

// int main()
// {
//     struct Data data;

//     printf("Size of structure Data: %lu\n", sizeof(data));

//     return 0;
// }

// #include <stdio.h>
// int *returnArray(int arr[3])
// {
//     for (int i = 0; i < 3; i++)
//     {
//         arr[i] = arr[i] * arr[i];
//     }
//     return arr;
// }

// int main()
// {
//     int arr[3] = {1, 2, 3};
//     printf("The Modified Array is : ");
//     int *modifiedArray = returnArray(arr);
//     for (int i = 0; i < 3; i++)
//     {
//         printf("%d,", *modifiedArray);
//         modifiedArray++;
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter first line: ");
    fgets(str, sizeof(str), stdin);
    // str[strcspn(str, "\n")] = '\0'; // Remove newline
    printf("You entered: %s\n", str);

    printf("Enter second line: ");
    fgets(str, sizeof(str), stdin);
    // str[strcspn(str, "\n")] = '\0'; // Remove newline
    printf("You entered: %s\n", str);

    return 0;
}
