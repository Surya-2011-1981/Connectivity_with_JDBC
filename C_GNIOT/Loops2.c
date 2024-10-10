#include <stdio.h>
int main()
{
    int start, end;
    printf("Enter Start value : ");
    scanf("%d", &start);
    printf("\nEnter End value : ");
    scanf("%d", &end);
    while (start <= end)
    {
        if (start % 2 == 0)
        {
            printf("%d\n", start);
        }
        start++;
    }
}