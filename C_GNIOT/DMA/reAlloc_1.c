#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sizeOfArray = 4;
    int *arr = (int *)malloc(sizeOfArray * sizeof(int));
    printf("Enter Array Elements : \n");
    for (int i = 0; i < sizeOfArray; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n******** Current Array Elements are : \n");
    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("%d\t", arr[i]);
    }
    // malloc() ends here

    int extraElements = 3;
    int *updatedArr = (int *)realloc(arr, (extraElements + sizeOfArray) * sizeof(int));
    printf("\nEnter %d more Elements :\n", extraElements);
    for (int i = sizeOfArray; i < (sizeOfArray + extraElements); i++)
    {
        scanf("%d", &updatedArr[i]);
    }

    printf("\n *************  Updated Array is *********\n");
    for (int i = 0; i < (sizeOfArray + extraElements); i++)
    {
        printf("%d\t", updatedArr[i]);
    }
    free(updatedArr);
    return 0;
}