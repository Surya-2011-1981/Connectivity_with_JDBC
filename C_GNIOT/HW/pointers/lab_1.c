// Write a program to pass the array into the function using pointer

#include <stdio.h>
int array_function(int *arr)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *arr);
        arr++;
    }
    return 0;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    array_function(arr);
    return 0;
}