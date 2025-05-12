#include <stdio.h>
int main()
{
    int max, secondMax;

    int arr[] = {1, 25, 21, 9, 67, 7, 10};
    max = arr[0];
    secondMax = arr[0];
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (secondMax < arr[i] && secondMax < max)
        {
            secondMax = arr[i];
        }
    }
    printf("Second max element : %d", secondMax);
    return 0;
}