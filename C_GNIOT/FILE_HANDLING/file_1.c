#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    // to create file in current directory
    fp = fopen("demo.txt", "w");

    // To create file in new directory using absoulate path
    // fp = fopen("C:/Users/surya/OneDrive/Desktop/Study/Github/C_GNIOT/FILE_HANDLING/testing.txt", "w");

    fclose(fp);
    return 0;
}
