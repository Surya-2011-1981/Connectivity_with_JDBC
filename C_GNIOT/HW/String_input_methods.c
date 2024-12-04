#include <stdio.h>
int main()
{
    char ch[20];
    printf("Enter Name : ");
    // scanf("%[^'\n']s", ch);
    // scanf("%19[^\n]", ch); 
    // scanf("%s", &ch);
    fgets(ch, sizeof(ch), stdin);
    printf("\n Entered Name is : %s", ch);
    return 0;
}