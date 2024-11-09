#include <stdio.h>

int main(){
    int x = 5;
    int *p = &x;
    int **k = &p;
    printf("%d\n" , *p);
    printf("%u\n" , *k);
    printf("%d\n" , **k);
return 0;
}
