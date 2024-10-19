#include <stdio.h>

int main(){
    int x = 10;
    x += (x++)+(++x)+x;
    //11+12+12 + 12
    printf("%d",x);
}
