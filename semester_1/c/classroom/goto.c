#include <stdio.h>

int main(){
    int number = 0;
    while(number <= 10){
        if (number == 10){
            goto found;
        }
        number ++;
    }
    printf("Number was not found ");

    return 0;

    found:
        printf("Number was found !");
        return 0;
}
