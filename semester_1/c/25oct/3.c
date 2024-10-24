#include <stdio.h>

int main(){
    int arr[5] = {11 , 12 , 13 , 14 ,15};
    int *z = &arr[0];

    printf("The value at initial memory adress of the pointer is: %d\nNow the value of the pointer on memory adress + 1: %d\nYou can see how it got to the next value in the array and change of data when the memory adres change >oo<\n", *z , *(z+1));
}