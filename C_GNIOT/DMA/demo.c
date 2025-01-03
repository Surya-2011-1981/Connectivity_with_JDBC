#include <stdio.h>
#include <stdlib.h>

int main() {
    int row, col;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("\nEnter the number of columns: ");
    scanf("%d", &col);

    // Allocate memory for a 2D array
    int **arr = (int **)malloc(row * sizeof(int *));
    for (int i = 0; i < row; i++) {
        arr[i] = (int *)malloc(col * sizeof(int));
    }

    printf("\nEnter Array Elements :\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nCurrent Array Elements Are : \n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    int extraRow;
    printf("Enter need of extra row : ");
    scanf("%d", &extraRow);

    // Reallocate memory for the additional rows
    arr = (int **)realloc(arr, (row + extraRow) * sizeof(int *));
    for (int i = row; i < (row + extraRow); i++) {
        arr[i] = (int *)malloc(col * sizeof(int));
    }

    printf("\nEnter %d more Elements :\n", (extraRow * col));
    for (int i = row; i < (row + extraRow); i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n *************  Updated Array is *********\n");
    for (int i = 0; i < (row + extraRow); i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // Free memory
    for (int i = 0; i < (row + extraRow); i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}