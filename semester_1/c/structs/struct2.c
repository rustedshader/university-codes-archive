#include <stdio.h>

struct{
    char *name;
    int age;
    int salary;
} emp1 , emp2 ;

int manager(){
    struct{
        char *name;
        int age;
        int salary;
    } manager;
    manager.age = 27;
    if (manager.age > 30){
        manager.salary = 45000;
    }
    else{
        manager.salary = 60000;
    }
    return manager.salary;
}

int main(){
    printf("Enter the salary of the employee: ");
    scanf("%d",&emp1.salary);
    printf("Emp salary is %d %d",emp1.salary , manager() );
}
