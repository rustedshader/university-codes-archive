#include <stdio.h>
struct employee{
    char employee_name[50];
    int basic_pay;
};

int main(){
    struct employee company_employee[100];
    for (int i = 0 ; i< 100 ; i++){
        printf("Enter the name of employee %d :",i+1);
        scanf("%s",company_employee[i].employee_name);
        printf("Enter the basic pay of emplyee %d : ",i+1);
        scanf("%d",&company_employee[i].basic_pay);

        float da = 0.52*company_employee[i].basic_pay;
        printf("The gross salary of the employee is %f\n",da+company_employee[i].basic_pay);
    }
    return 0;
}
