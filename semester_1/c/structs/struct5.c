#include <stdio.h>

typedef struct time {
    int hours;
    int minutes;
    int seconds;
} time;

int main(){
    int total_time;
    time t1;
    time t2;
    printf("Enter the time1 in hours: ");
    scanf("%d",&t1.hours);
    printf("Enter the time1 in minutes: ");
    scanf("%d",&t1.minutes);
    printf("Enter the time1 in seconds: ");
    scanf("%d",&t1.seconds);
    printf("Enter the time2 in hours: ");
    scanf("%d",&t2.hours);
    printf("Enter the time2 in minutes: ");
    scanf("%d",&t2.minutes);
    printf("Enter the time2 in seconds: ");
    scanf("%d",&t2.seconds);

    total_time += t1.hours*60*60 + t2.hours*60*60 + t1.minutes*60 + t2.minutes * 60 + t1.seconds + t2.seconds;
    int total_hours = total_time / 3600 ;
    total_time -= total_hours*3600;
    int total_minutes = total_time / 60;
    total_time -= total_minutes*60;
    int total_seconds = total_time;

    printf("The total time is hours minutes and seconds %d %d %d\n" ,total_hours ,total_minutes , total_seconds );
}
