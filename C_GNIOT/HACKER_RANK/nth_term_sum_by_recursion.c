#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the following function.
int sum = 0;
int find_nth_term(int n, int a, int b, int c)
{
    int temp;
    if (n > 3)
    {
        sum = a + b + c;
        n--;
        return find_nth_term(n, b, c, sum);
    }
    else if (n <= 3)
    {
        if (n == 1)
            return a;
        else if (n == 2)
            return b;
        else
            return c;
    }
    else
    {
        return sum;
    }
}

int main()
{
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c); // 5 1 2 3

    printf("%d", ans);
    return 0;
}