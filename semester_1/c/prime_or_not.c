#include <stdio.h>

int main(){
    int a;
    printf("Enter Your Number\n -> ");
    scanf("%d",&a);
    int prime = 0;
    for (int i=2;i<a;i++){
        if(a % i == 0){
            printf("Number is not prime");
            prime += 1;
            return 0;
        }
    }
    if (prime == 0){
    printf("Number is prime");
    }
    return 0;
}
