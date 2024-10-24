#include <stdio.h>

void func(int a){
    printf("%d", a);
}

int z(){
return 5;
}

int main(){

    func(z());
}
