#include <stdio.h>

int p_is_not(int a){
    int count = 0;
    for(int i = 2; i<a;i++){
        if(a%i == 0){
            count++;
        }
    }
    if (count > 0 ){
        return -1;
    }
    else{
        return 1;
    }
}

int main(){
int z = p_is_not(6);
if (z>0){
    printf("prime\n");
}
else{
    printf("not prime\n");
}
return 0;
}
