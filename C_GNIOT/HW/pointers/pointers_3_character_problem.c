// Declare pointer p, storing the address of char variable gender whose value is 'f' , print the value of gender , using the pointer.

#include <stdio.h>
int main()
{
    char gender = 'f';
    int *ch_p = &gender;
    printf("%c", *ch_p);
    return 0;
}