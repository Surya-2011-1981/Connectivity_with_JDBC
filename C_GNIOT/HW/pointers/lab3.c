#include <stdio.h>
int main()
{
    char name[100];
    fgets(name, sizeof(name), stdin);
    printf("\n%s", name);
    return 0;
}