// #include <stdio.h>
// int main()
// {
//     // int a[][3] = {10, 20, 30, 40, 50, 60};
//     // printf("%d", a[0][3]);
//     int arr[] = {1, 2, 3};
//     printf("%d", arr[3]);
//     return 0;
// }

#include <stdio.h>

int main()
{
    // Declare and initialize a 2D array (3 rows and 4 columns)
    int matrix[3][4] = {
        1, 2, 3, 4,      // Row 0
        5, 6, 7, 8,      // Row 1
        90, 10, 11, 12}; // Row 2

    // Access and print elements using valid indices
    // printf("matrix[0][2] = %d\n", matrix[0][2]); // Accessing element in row 0, column 2 (value: 3)
    // printf("matrix[1][1] = %d\n", matrix[1][1]); // Accessing element in row 1, column 1 (value: 6)
    // printf("matrix[2][3] = %d\n", matrix[2][3]); // Accessing element in row 2, column 3 (value: 12)

    // Accessing an out-of-bounds element
    printf("matrix[1][7] = %d\n", matrix[1][7]); // Out-of-bounds access (undefined behavior)

    return 0;
}
