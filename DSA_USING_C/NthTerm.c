#include <stdio.h>
int findNthTerm(int a1, int a2, int nthTerm)
{
    int diff = a2 - a1;
    if (a1 == 1 && diff == 1)
    {
        return nthTerm;
    }
    else if (a1 == 1 && diff != 1)
    {
        return ((nthTerm * diff) - (diff - 1));
    }
}
int main()
{

    return 0;
}