#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int start, end, printValue, length;
    length = 2 * n - 1;
    start = 0;
    end = length - 1;
    printValue = n;
    int **arr;
    arr = (int **)malloc(length * sizeof(int *));
    for (int i = 0; i < length; i++)
    {
        arr[i] = (int *)malloc(length * sizeof(int));
    }

    if (arr == NULL)
    {
        return 1;
    }
    while (printValue > 0)
    {
        for (int i = start; i <= end; i++)
        {
            for (int j = start; j <= end; j++)
            {
                if (i == start || i == end || j == start || j == end)
                {
                    arr[i][j] = printValue;
                }
            }
            printf("\n");
        }
        printValue--;
        start++;
        end--;
    }

    // Printing values

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}