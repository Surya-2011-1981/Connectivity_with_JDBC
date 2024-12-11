#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size;
    printf("Enter number of Elements : ");
    scanf("%d", &size);
    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL)
    {
        printf("\n Memory not allocatd");
        return 1;
    }
    printf("Enter Array Elements\n");
    for (int i = 0; i < size; i++)
    {
        scanf("");
    }
    // for ()
    return 0;
}