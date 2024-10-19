#include <stdio.h>


typedef struct car{
    char* engine;
    char* fuel_type;
    int seat_cap;
    int tank_cap;
    float mileage;
} car_def;

int main(){
    car_def c1  = {"V1","petrol",9999,343,31.2};
    car_def c2 = {.engine="V12",.mileage=98.1};
    printf("car1\n engine: %s fuel type: %s seat capacity: %d \ncar2\n engine: %s mileage: %f\n",c1.engine,c1.fuel_type,c1.seat_cap,c2.engine,c2.mileage);
}
