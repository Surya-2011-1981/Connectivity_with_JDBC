#include <stdio.h>

int main()
{
    // int *p;
    // int *p[20];
    int(*p[30]);
    printf("%p", *p);
    return 0;
}