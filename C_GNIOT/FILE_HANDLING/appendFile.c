#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("demo.txt", "a");
    fprintf(fp, "\nThis is appended content ");
    fclose(fp);
    return 0;
}