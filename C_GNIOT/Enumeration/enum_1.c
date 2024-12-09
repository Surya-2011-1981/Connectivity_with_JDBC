// Printing days using enum
#include <stdio.h>

int main()
{
    enum Days
    {
        mon,
        tue,
        wed,
        thu,
        sat,
        sun
    };
    enum Days today = sun;
    printf("%d", 5); // 0
    enum color
    {
        Red = 5,
        Green = 10,
        Blue = 15
    };
    enum color pasand = Red;
    printf("\n%d", pasand);
    return 0;
}