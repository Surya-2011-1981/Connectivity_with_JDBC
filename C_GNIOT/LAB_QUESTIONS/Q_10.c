#include <stdio.h>
int main()
{
    int steps;
    printf("Enter Steps : ");
    scanf("%d", &steps);
    int first, next, temp;
    first = 0;
    next = 1;
    printf("\n Series is : %d, %d,", first, next);
    int i = 2;
    while (i < steps)
    {
        temp = first + next;
        first = next;
        next = temp;
        printf(" %d,", next);
        i++;
    }
    return 0;
}