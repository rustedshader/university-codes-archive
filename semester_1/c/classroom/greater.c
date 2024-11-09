#include <stdio.h>


int main()
{
int num1,num2,num3;
int greatest_number = 0;
printf("Enter Number 1: ");
scanf("%d",&num1);
printf("Enter Number 2: ");
scanf("%d",&num2);
printf("Enter Number 3: ");
scanf("%d",&num3);

int arr[3]  = {num1,num2,num3};

for (int i=0;i<=2;i++){
if ( arr[i] > greatest_number ){
greatest_number = arr[i];
}
}

printf("Greatest Number is %d\n",greatest_number);

return 0;
}
