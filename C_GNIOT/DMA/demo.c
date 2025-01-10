#include <stdio.h>

static int b = 20;
int main()
{
    b++;
    static int a = 10;
    // const int a = 10;
    a++;
    printf("%d\n", a);
    printf("%d", b);
    return 0;
}