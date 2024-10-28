#include <stdio.h>
int main()
{
    int i = 0;
    int j;
    j = (i = i + 1, i = i + 2, i = i + 3);
    printf("%d", j);

    return 0;
}