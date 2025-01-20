#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("demo.txt", "r");

    if (fp == NULL)
    {
        printf("File doesn't exist open");
        return 1;
        fclose(fp);
    }

    char ch[100];

    // fgets(ch, 100, fp); // This will only read first line

    // To read all content we can use loop
    while (fgets(ch, 100, fp))
    {
        printf("%s", ch);
    }
    // printf("%s", ch);
    fclose(fp);
    return 0;
}