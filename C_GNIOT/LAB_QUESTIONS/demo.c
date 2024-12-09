#include <stdio.h>

void inputMatrix(int matrix[10][10], int rows, int cols)
{
    printf("Enter the elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[10][10], int rows, int cols)
{
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int matrix1[10][10], int matrix2[10][10], int result[10][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j]; // Add corresponding elements
        }
    }
}

int main()
{
    int rows, cols;
    int matrix1[10][10], matrix2[10][10], result[10][10];

    // Input the dimensions of the matrices
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Input the first matrix
    inputMatrix(matrix1, rows, cols);
    // Input the second matrix
    inputMatrix(matrix2, rows, cols);

    // Print the first matrix
    printf("First Matrix:\n");
    printMatrix(matrix1, rows, cols);

    // Print the second matrix
    printf("Second Matrix:\n");
    printMatrix(matrix2, rows, cols);

    // Add the matrices
    addMatrices(matrix1, matrix2, result, rows, cols);

    // Print the result
    printf("Resultant Matrix (Sum):\n");
    printMatrix(result, rows, cols);

    return 0;
}