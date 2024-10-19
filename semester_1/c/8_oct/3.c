#include <stdio.h>

struct Car{
    int car_id;
    char car_model[50];
    int car_rental_rate;
};

int main(){
    struct Car c[3];

    for (int i = 0 ; i < 3 ; i++){
        printf("Enter the model of car %d: ",i+1);
        scanf("%s",c[i].car_model);
        printf("Enter the id of car %d: ",i+1);
        scanf("%d",&c[i].car_id);
        printf("Enter the car %d rental rate: ",i+1);
        scanf("%d",&c[i].car_rental_rate);
    }

    printf("The total rental cost of the cars are: %d",c[0].car_rental_rate + c[1].car_rental_rate + c[2].car_rental_rate);
    return 0;

}
