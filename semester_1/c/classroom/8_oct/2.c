#include <stdio.h>


    struct Employee{
        int employee_id;
        char name[50];
        int employee_salary;
    };
    int main(){
        struct Employee e[3];

        for (int i = 0 ; i< 3 ; i++){
            printf("Enter the name of employee %d ",i+1);
            scanf("%s",e[i].name);
            printf("Enter the id of the Employee %d: ",i+1);
            scanf("%d",&e[i].employee_id);
            printf("Enter the salary of the Employee %d: ",i+1);
            scanf("%d",&e[i].employee_salary);

        }

       int max_salary = e[0].employee_salary;
       int max_salary_index = 0;

      for (int i = 0 ; i<3 ; i++) {
          if(e[i].employee_salary > max_salary){
              max_salary = e[i].employee_salary;
              max_salary_index = i;
              }
      }

      printf("The employee %d has highest salary\n",max_salary_index+1);
      printf("The employee name: %s\n",e[max_salary_index].name);
      printf("The employee id %d\n",e[max_salary_index].employee_id);
      printf("The employee salary is %d\n",e[max_salary_index].employee_salary);
    }
