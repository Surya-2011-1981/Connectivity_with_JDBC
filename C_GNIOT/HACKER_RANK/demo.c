#include <stdio.h>
int main()
{
    int arr[2][3] = {{1, 2, 3}, {5, 6, 7}};
    printf("%d", &arr[0]);
    return 0;
}