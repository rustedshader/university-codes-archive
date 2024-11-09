#include <stdio.h>

enum dead {
    gaga = 8,
    babab = 5 ,
    hahah = 3,
};

int main(){
    int _x_ = gaga | babab | hahah ;
    //8 + 5 + 3 = 16 
    printf("%d\n", _x_); 
    //8+5+3 = 15
    return 0 ;

}