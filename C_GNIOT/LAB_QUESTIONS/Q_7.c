#include <stdio.h>
int main()
{
    float marks;
    printf("Enter your Marks : ");
    scanf("%f", &marks);
    int rem = (int)marks / 10;
    switch (rem)
    {
    case 9:
    case 8:
    case 10:
        printf("You have secured Distinction ");
        break;
    case 7:
    case 6:
        printf("You have Secured A Grade");
        break;
    case 5:
    case 4:
    }
    return 0;
}