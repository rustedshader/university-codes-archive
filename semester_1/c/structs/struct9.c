#include <stdio.h>
typedef struct students{
    char name[50];
    int age;
    int marks;
} student ;

int main(){

    student s1;
    student s2;
    printf("Enter the name of student 1\n");
    scanf("%s",s1.name);
    printf("Enter the age of student 1\n");
    scanf("%d",&s1.age);
    printf("Enter the marks of student 1\n");
    scanf("%d",&s1.marks);

    printf("Enter the name of student 2\n");
    scanf("%s",s2.name);
    printf("Enter the age of student 2\n");
    scanf("%d",&s2.age);
    printf("Enter the marks of student 2\n");
    scanf("%d",&s2.marks);

    printf("Name Age and Marks of student 1 are: %s %d %d\n",s1.name,s1.age,s1.marks);
    printf("Name Age and Marks of student 2 are: %s %d %d\n",s1.name,s1.age,s2.marks);
    printf("Average Marks of student1 and student 2 are : %d\n",(s1.marks + s2.marks)/2);
    return 0;

}
