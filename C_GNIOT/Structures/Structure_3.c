#include <stdio.h>
#include <string.h>
struct Personal
{
    char name[15];
    int age;
};
struct Professional
{
    int roll;
    float marks;
    struct Personal persInfo;
};
int main()
{

    // struct Personal profInfo;
    // printf("%d", sizeof(profInfo));

    struct Professional profInfo;
    // char ch[10] = "Surya";
    // profInfo.persInfo.name[15] = "Surya";
    strcpy(profInfo.persInfo.name, "Surya");
    profInfo.persInfo.age = 21;
    profInfo.roll = 21;
    profInfo.marks = 20.5;

    printf("Roll- %s \nName- %d \nMarks- %f\n", profInfo.persInfo.name, profInfo.persInfo.age, profInfo.marks);
    return 0;
}