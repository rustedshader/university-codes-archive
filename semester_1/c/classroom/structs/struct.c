#include <stdio.h>

struct{
    char *engine;
    char *fuel_type;
    int set_cap;
    int tank_cap;
    float mileage;
} car1 , car2 ;

int main(){
    car1.engine = "V12";
    car2.engine = "V11";
    printf("%s %s\n",car1.engine,car2.engine);
    return 0;
}
