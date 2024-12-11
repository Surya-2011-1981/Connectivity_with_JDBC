#include <stdio.h>
#include <math.h>
int min(int n1, int n2)
{
    if (n1 <= n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}
int main()
{
    int n1 = 28;
    int n2 = 21;
    int i = min(n1, n2);
    printf("%d", i);
    while (i > 0){
        if((n1+n2)-i%i==0){
            
        }
    }

    return 0;
}