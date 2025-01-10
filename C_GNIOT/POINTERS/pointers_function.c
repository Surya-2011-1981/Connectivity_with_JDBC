#include <stdio.h>
int *sumAndDiff(int a, int b)
{
    int result[2] = {(a + b), (a - b)};
    int *ptr = result;
    return ptr;
}
int main()
{
    int *result = sumAndDiff(5, 3);
    printf("%d", *(result + 1));
    return 0;
}
// 8 2