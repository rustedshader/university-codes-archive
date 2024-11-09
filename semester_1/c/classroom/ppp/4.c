#include <stdio.h>

/* 0 1 2 3 5 8 13 21 */
int fib(int a){
    if ( a == 1){
        return 1;
    }
    if ( a == 0){
        return 0;
    }
    return fib(a-1) + fib(a-2);
}
int main(){

    printf("%d",fib(3));

}
