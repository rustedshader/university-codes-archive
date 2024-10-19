/* instead of declaring multiple variables we can also declare an array of structres in which
element of the array will represent a structre variable
*/

#include <stdio.h>
struct car {
    int tank_cap;
    int seat_cap;
    float mileage;
};


int main(){
    struct car c[2];
    for (int i = 0 ; i<2 ; i++ ){
        printf("Enter the fuel tank cap of car %d: ",i+1);
        scanf("%d", &c[i].tank_cap);
        printf("Enter the car seat cap of car %d: ",i+1);
        scanf("%d",&c[i].seat_cap);
        printf("Enter the mileage of car %d: ",i+1);
        scanf("%f",&c[i].mileage);

    }

    printf("\n\n");
    for (int i = 0 ; i< 2 ; i++){
        printf("car details %d\n",i+1);
        printf("fueltank cap %d\n",c[i].tank_cap);
        printf("seat cap of the car %d\n",c[i].seat_cap);
        printf("mileage of the car is %f\n",c[i].mileage);
    }

    return 0;
}
