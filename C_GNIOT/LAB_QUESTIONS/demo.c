#include <stdio.h>
int main()
{
    int i, j, k, l;
    i = 1;
    k = 1 + (j = i);
    printf("%d %d %d", i, j, k);
    return 0;
}