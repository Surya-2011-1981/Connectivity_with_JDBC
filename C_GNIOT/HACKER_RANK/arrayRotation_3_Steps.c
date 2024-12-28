#include <stdio.h>
int main()
{
    int size;
    printf("Enter Size of array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter Array Elements : ");
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);
    }

// 12 3 4 5 67 9 6 --> 
// Step 1: 6 12 3 4 5 67 9 
// Step 2: 9 6 12 3 4 5 67 
// Step 3:67 9 6 12 3 4 5
    // Rotating Array
    int mid = (int)7 / 2;

    return 0;
}