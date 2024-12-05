#include <stdio.h>
int main()
{

    // 1 to 20
    for (int i = 1; i <= 20; i++)
        printf("%d  ", i);

    printf("\n\n");

    // 20 to 1
    for (int i = 20; i >= 1; i--)
        printf("%d  ", i);

    printf("\n\n");

    // Multiplcation Table
    int num;
    printf("Enter any Number\n");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", (num * i));
    }

    return 0;
}