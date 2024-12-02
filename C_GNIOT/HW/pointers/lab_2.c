//
#include <stdio.h>
#include <conio.h>
int main()
{
    // int a = 10;
    // int *ap = &a;
    // int **app = &ap;
    // printf("%p", *ap);
    // printf("\n%p", ap);
    // printf("\n%p", app);

    int arr[] = {1, 2, 3};

    // printf("%p\n", &arr[0]);
    // printf("%p\n", &arr[1]);
    // printf("%p\n", &arr[2]);

    // int *ptr[] = {&arr[0], &arr[1], &arr[2]};
    int *ptr[3];

    for (int i = 0; i < 3; i++)
    {
        ptr[i] = &arr[i];
        printf("%p\n", ptr[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%p\n", ptr[i]);
    }
    return 0;
}