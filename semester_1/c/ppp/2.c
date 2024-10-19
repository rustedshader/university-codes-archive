#include <stdio.h>

int gcd(int a , int b){
    int max_num;
    if (a>b){
        max_num = a;
    }
    else if (b<a){
        max_num = b;
    }
    else{
        max_num = a;
    }

    int max = 1;
    for(int i =1 ; i<=max_num;i++){
        if (a%i == 0 && b%i== 0 ){
            if (i > max){
                max = i;
            }
        }
    }
    return max;
}

int main(){
    int a = 36;
    int b = 60;

    printf("%d\n",gcd(a,b));
}
