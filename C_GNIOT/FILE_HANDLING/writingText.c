#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("demo.txt", "a");
    fprintf(fp, "Hello this is the demo ");
    fclose(fp);
    return 0;
}