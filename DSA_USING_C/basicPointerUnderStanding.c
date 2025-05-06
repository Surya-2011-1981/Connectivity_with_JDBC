#include <stdio.h>
#pragma pack()
struct point
{
    int num;
    char ch;
};
int main()
{

    struct point p;
    p.ch = 'A';
    p.num = 10;
    struct point *ptr = &p;

    // printf("%p\n", ptr);
    // printf("%p", &p.num);

    printf("%d", ptr->num);

    // int a=printf("Hello");
    // printf("%d",a);

    return 0;
}