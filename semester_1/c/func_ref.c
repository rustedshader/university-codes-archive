#include <stdio.h>

void calc(int *p);

int main(){
    int x =10;
    int* z = &x;
    calc(z);
    printf("%d\n",x);
    return 0;
}

void calc(int *p){
    *p = *p + 10;
}
