#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ar[] = {1, 2, 3, 4};
    int *arr = (int *)&ar;
    // int *arr=ar;
    // int *arr=&arr;
    // ******* all these are correct, containing (address of ar[0])******

    printf("%p holds value %d", arr, *arr);

    // Incrementing and dcrementing pointer

    arr++; // now pointer value is 2
    printf("\n%p holds value %d", arr, *arr);

    arr++; // now pointer value is 3
    printf("\n%p holds value %d", arr, *arr);

    arr--; // now pointer value is 2
    printf("\n%p holds value %d", arr, *arr);

    return 0;
}