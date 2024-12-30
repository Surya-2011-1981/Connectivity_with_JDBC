#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size;
    int rotate = 3;
    int temp;
    printf("Enter Size of array : ");
    scanf("%d", &size);
    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory not allocated...!");
        return 1;
    }
    printf("Enter Array Elements : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 12 3 4 5 67 9 6 -->
    // Step 1: 6 12 3 4 5 67 9
    // Step 2: 9 6 12 3 4 5 67
    // Step 3:67 9 6 12 3 4 5
    // Rotating Array

    printf("\nOriginal Array Elements are : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ,", arr[i]);
    }
    printf("\n\n****************************************************** \n");
    while (rotate > 0)
    {
        temp = arr[size - 1];
        for (int i = size - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
        rotate--;
    }

    printf("\nRotated Array Elements are : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ,", arr[i]);
    }
    printf("\n\n");
    free(arr);
    return 0;
}