#include <stdio.h>
int main()
{
    for (int i = 1; i <= 20; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 20; i >= 1; i--)
    {
        printf("%d ", i);
    }
    printf("\n\n");
    // Format 1 Complete

    printf("***************Format 1 Complete*****************\n\n");

    for (int i = 20; i >= 1; i--)
    {
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 20; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    // Format 2 Complete
    printf("\n");
    printf("*****************Format 2 Complete***************\n\n");

    for (int i = 1; i <= 20; i++)
    {
        printf("%d\n", i);
    }
    for (int i = 20; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    printf("*****************Format 3 Complete***************\n\n");

    return 0;
}