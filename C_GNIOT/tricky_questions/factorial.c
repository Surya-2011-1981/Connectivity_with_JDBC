#include <stdio.h>
int fact(int num);
int main()
{
    int num;
    printf("Enter any Number to get Factorial : ");
    scanf("%d", &num);
    printf("The Factorial of %d is %d ", num, fact(num));
    return 0;
}
int fact(int num)
{
    if (num < 1)
        return 1;
   
    return num * fact(num - 1);
}