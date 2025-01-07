#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr;
    arr = (int *)malloc(26 * sizeof(int));
    int ascii_value = 65;
    for (int i = 0; i < 26; i++)
    {
        arr[i] = ascii_value;
        ascii_value++;
        printf("%c, ", (char)arr[i]);
    }
    return 0;
}