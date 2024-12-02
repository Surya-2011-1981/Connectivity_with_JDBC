// Write a program to pass the array into the function using pointer

#include <stdio.h>
void array_function(int *arr);
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    array_function(arr);
    return 0;
}
void array_function(int *arr)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *arr);
        arr++;
    }

}