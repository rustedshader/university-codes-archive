#include <stdio.h>

struct time{
unsigned int hours: 5 ;
unsigned int minutes: 6;
unsigned int seconds: 7;
};

int main(){
struct time t = { 10 , 30 , 40 };
printf("Hours is %d Minutes is %d and Seconds is %d\n" , t.hours , t.minutes , t.seconds);
    return 0;
}
