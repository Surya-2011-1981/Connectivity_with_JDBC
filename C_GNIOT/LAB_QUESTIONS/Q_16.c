#include <stdio.h>
int main()
{
    int size;
    printf("Enter size of array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter Array Elements : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int reversedArr[10];
    int j = size;
    printf("\nOriginal Array is : ");
    for (int i = 0; i < size; i++)
    {
        reversedArr[i] = arr[j - i - 1];
        printf("%d ,", arr[i]);
    }
    // Printing Reversed Array
    printf("\nReversed Array is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ,", reversedArr[i]);
    }
    return 0;
}