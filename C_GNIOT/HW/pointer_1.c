#include <stdio.h>
int main()
{

    int a;
    a = 10;
    int *add_of_a = &a;
    printf("%p", add_of_a);
    return 0;
}