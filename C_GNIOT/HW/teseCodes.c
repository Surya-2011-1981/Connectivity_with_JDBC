// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int arr[3] = {10, 20, 30};
    int arr2[3] = {40, 50, 60};
    int arr3[6];

    for (int i = 0; i < 3; i++)
    {
        arr3[i] = arr[i];
    }
    for (int j = 0; j < 3; j++)
    {
        arr3[j + 3] = arr2[j];
    }
    printf("New array:-\n");
    for (int j = 0; j < 6; j++)
    {
        printf("%d\t", arr3[j]);
    }

    return 0;
}