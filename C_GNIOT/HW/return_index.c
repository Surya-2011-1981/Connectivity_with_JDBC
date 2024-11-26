#include <stdio.h>
int index_return(int arr[3][3], int target, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == target)
            {
                return i * rows + j;
            }
        }
    }
}
int main()
{
    int rows, cols;
    printf("Enter no. of rows : ");
    scanf("%d", &rows);
    printf("Enter no. of columns : ");
    scanf("%d", &cols);
    int arr[rows][cols];
    int target;
    printf("Enter elements in array \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Elements in array is\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("Enter target Number : ");
    scanf("%d", &target);
    int flag = 0;
    int index;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == target)
            {
                flag = 1;
                index = index_return(arr, target, rows, cols);
                printf("The index i = %d and j = %d", index / rows, index % rows);
                break;
            }
        }
    }

    if (!flag)
    {
        printf("Not present");
    }
}
