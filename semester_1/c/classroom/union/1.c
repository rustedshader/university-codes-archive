#include <stdio.h>

union abc {
    int a;
    double c;
    char b;
    float d;
};

int main(){
    printf("%lu\n",sizeof(union abc));
}
