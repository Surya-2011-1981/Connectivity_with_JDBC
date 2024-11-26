#include <stdio.h>

int main()
{
    // Declare variables of different types
    // int intVar = 10;
    // float floatVar = 5.5f;
    // double doubleVar = 20.99;
    // char charVar = 'A';

    // // Declare pointers for each variable type
    // int *intPtr = &intVar;
    // float *floatPtr = &floatVar;
    // double *doublePtr = &doubleVar;
    // char *charPtr = &charVar;
    // printf("Address of int var : %p", intPtr);
    // printf("\nSomething : %p\n", *intPtr);

    // // Print the sizes of the pointer variables
    // printf("Size of int pointer: %d bytes\n", sizeof(intPtr));
    // printf("Size of float pointer: %d bytes\n", sizeof(floatPtr));
    // printf("Size of double pointer: %d bytes\n", sizeof(doublePtr));
    // printf("Size of char pointer: %d bytes\n", sizeof(charPtr));

    int arr[] = {1, 2, 3};
    int *add_ar = &arr;
    int *add_of_ar_at_0 = &arr[0];
    // printf("%d", (add_ar == add_of_ar_at_0));
    // PROVE THAT ARRAY POINTER STORES ADDRESS OF FOR ARRAY ELEMENT

    int *arrNext = ++add_ar;
    // printf("%d  ", *arrNext);

    char ch[] = {'a', 'b', 'c'};
    printf("%c", ch[0]);
    return 0;
}


