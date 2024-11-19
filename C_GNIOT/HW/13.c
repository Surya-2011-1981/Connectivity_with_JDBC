#include <stdio.h>

int main()
{
    int x, y, z, temp;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("Before swapping: x = %d, y = %d, z = %d\n", x, y, z);

    temp = x;
    x = y;
    y = z;
    z = temp;

    printf("After swapping: x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}