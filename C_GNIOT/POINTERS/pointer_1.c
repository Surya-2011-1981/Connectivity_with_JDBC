#include<stdio.h>
int main()
{
    int num=10;
    int *ptr;
    ptr=&num;
    printf("%p is the Address",ptr);
    printf("\n%d is the value at Address %p",*ptr,ptr);
    return 0;
}