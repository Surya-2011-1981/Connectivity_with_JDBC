// WAP in C Using Swich to Convert the grade (A,B,C,D and F) into its description can Excellent - A
//  Good - B
//  Avg - C
// Below - D
//  Fail - F

#include <stdio.h>
int main()
{
    char grade;
    printf("Enter Your Grade  :  ");
    scanf("%c", &grade);
    switch (grade)
    {
    case 'A':
    case 'a':
        printf("Excellent");
        break;
    case 'B':
    case 'b':
        printf("Good");
        break;
    case 'C':
    case 'c':
        printf("Average");
        break;
    case 'D':
    case 'd':
        printf("Below Average");
        break;
    case 'F':
    case 'f':
        printf("Fail hai tu...");
        break;
    default:
        printf("Wrong");
    }
    return 0;
}