#include <stdio.h>

int fac(int x){
    int z = 1;
   for(int i =1 ; i<=x;i++){
       z*=i;
   }
    return z;
}

int main(){
    int z = fac(5);
    printf("%d\n",z);
}
