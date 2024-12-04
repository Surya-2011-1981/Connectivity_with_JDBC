// . is Accessiblity Opertaor in s1.name

#include <stdio.h>
struct stu_details
{
    int rollno;
    char name[20];
    float marks;
};
struct stu_details s1[3];
// struct stu_details s2;
int main()
{
    // printf("Enter 1st Name : ");
    // scanf("%s", &s1.name);
    // printf("Enter 1st Roll : ");
    // scanf("%d", &s1.rollno);
    // printf("Enter 1st Marks : ");
    // scanf("%f", &s1.marks);
    // printf("Enter 2nd Name : ");
    // scanf("%s", &s1.name);
    // printf("Enter 2nd Roll : ");
    // scanf("%d", &s1.rollno);
    // printf("Enter 2nd Marks : ");
    // scanf("%f", &s1.marks);
    // printf("Name : %s and %s\n", s1.name, s2.name);
    // printf("Roll : %d and %d\n", s1.rollno, s2.rollno);
    // printf("Name : %f and %d\n ", s1.marks, s2.marks);

    //   ****************** Arrays of Strucure ************************
    for (int i = 0; i < 2; i++)
    {
        printf("Enter Name at %d ", i);
        scanf("%s", &s1[i].name);
        printf("Enter Roll at %d ", i);
        scanf("%d", &s1[i].rollno);
        printf("Enter Marks at %d ", i);
        scanf("%f", &s1[i].marks);
    }

    for (int i = 0; i < 2; i++)
    {
        printf("\nRoll %d  is %d", i, s1[i].rollno);
        printf("\nMarks %d  is %f", i, s1[i].marks);
        printf("\nName %d  is %s", i, s1[i].name);
    }

    return 0;
}
