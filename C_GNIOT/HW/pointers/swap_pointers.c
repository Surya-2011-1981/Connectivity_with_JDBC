#include <stdio.h>
void swap(int *a, int *b)
{
    printf("Before Swapping\n First Number : %d\n Second Number : %d", *a, *b);

    int temp = *a;
    *a = *b;
    *b = temp;
    printf("\nAfter Swapping\n First Number : %d\n Second Number : %d ", *a, *b);
}
int main()
{
    int n1, n2;
    printf("Enter Two Number : ");
    scanf("%d %d", &n1, &n2);
    swap(&n1, &n2);
    return 0;
}
