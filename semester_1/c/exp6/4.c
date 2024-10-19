#include <stdio.h>

int ISPRIME(int a ){
    for(int i = 2  ; i < a ; i++){
        if (a%i == 0){
            return -1;
        }
    }
    return 1;
}

int main(){
    int start;
    int end;
    printf("enter the starting range: ");
    scanf("%d",&start);
    printf("enter the ending range: ");
    scanf("%d",&end);
    for (int i = start ; i <=end ; i ++){
        if(ISPRIME(i) == -1){
            printf("%d is not prime\n",i);
        }
        else{
            printf("%d is prime\n",i);
        }
    }
    return 0;
}
