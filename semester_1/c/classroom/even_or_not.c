#include <stdio.h>


int main(){
    int a;
    printf("Enter your Number\n -> ");
    scanf("%d",&a);
    if(a%2 == 0){
        printf("It is Even Number !");
    }
    else{
        printf("It is Odd Number !");
    }
}
