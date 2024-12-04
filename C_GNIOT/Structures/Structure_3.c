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

    // struct Student stu_obj[3] = {{"Abhay", 1, 9.5} {"Ankit", 2, 8.5} {"Abhay", 3, 7.5}};
};
int main()
{

    struct Professional profInfo;

    strcpy(profInfo.persInfo.name, "Abhay Nishad");
    profInfo.persInfo.age = 21;
    profInfo.persInfo.marks = 20.5;

    printf("roll- %d | name- %s | marks- %.1f\n", profInfo.persInfo.name, profInfo.persInfo.age, profInfo.persInfo.marks);
    return 0;
}