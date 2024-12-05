#include <stdio.h>
int printN(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printN(n);
    return 0;
}
int printN(int n)
{
    int i = 1;
    if (i <= n)
    {
        return n;
    }
    else
    {
        printf("%d ,", i);
        return printN(i + 1);
    }

}