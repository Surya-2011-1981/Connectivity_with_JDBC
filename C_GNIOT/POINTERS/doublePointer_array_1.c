#include <stdio.h>
#include <stdlib.h>
int main()
{
    int row, col;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("\nEnter the number of columns: ");
    scanf("%d", &col);
    int **arr = (int **)malloc((row * col) * sizeof(int));
    printf("\nEnter Array Elements : ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n Array Elements Are : %d \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    free(arr);
    return 0;
}