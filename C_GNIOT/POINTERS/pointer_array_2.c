#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sizeOfArray;
    printf("Enter size of Array : ");
    scanf("%d", &sizeOfArray);
    int *arr = (int *)malloc(sizeOfArray * sizeof(int));
    printf("Enter Array Elements : ");
    // for (int i = 0; i < sizeOfArray; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }

    
    int i = 0;
    while (i < sizeOfArray)
    {
        scanf("%d", arr + i);
        i++;
    }

    printf("\nArray Elements are : ");
    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("%d , ", arr[i]);
    }
    return 0;
}