#include <stdio.h>

int main(){
    int x =5;
    int *ptr = &x;

    printf("%p\n",ptr); // ADRESS OF VARIABLE THAT POINTER IS POINTING TO
    printf("%p\n",&ptr);// ADRESS OF POINTER
    printf("%d\n",*ptr);// VALUE OF VARIABLE THAT POINTER IS POINTING TO
    printf("%d\n",x);// VALUE OF THE VARIABLE
    printf("%p\n",&x);// ADRESS OF THE VARIABLE
}
