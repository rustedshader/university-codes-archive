/* Gregorian Calender */
#include <stdio.h>

/* 01/01/01 -> Monday */
/*
The year 1000 is not a leap year ?.

According to the rules of the Gregorian calendar, a year is a leap year if:

It is divisible by 4.
However, if it is divisible by 100, it must also be divisible by 400 to be a leap year.
The year 1000 is divisible by 4 and 100, but it is not divisible by 400. Therefore, it does not qualify as a leap year.

*/
int main(){
int year;
printf("Enter the year\n -> ");
scanf("%d",&year);
int count = 0;
for (int i=1;i<=year;i++){
    if (((i-1)%4) == 0 && i != 1){
        if ((i-1)%100 == 0){
            if((i-1)%400 == 0){
                count+=2;
            }
            else{
                count+=1;
            }
        }
        else{
        count+=2;
        }
    }
    else{
        count+=1;
    }
    if(count > 7){
        count = count-7;
    }
}
if(count == 1){
    printf("Monday\n");
}
if(count == 2){
    printf("Tuesday\n");
}
if(count == 3){
    printf("Wednesday\n");
}
if(count == 4){
    printf("Thursday\n");
}
if(count == 5){
    printf("Friday\n");
}
if(count == 6){
    printf("Saturday\n");
}
if(count == 7){
    printf("Sunday\n");
}
return 0 ;
}
