/* Ramajunan Number  */
#include <stdio.h>

int main(){
    for (int i = 1; i<=12 ; i++){
        for (int k = 1 ; k<=12 ; k++){
            if (i*i*i + k*k*k == 1729){
                printf("%d %d\n",i,k);
            }
        }
    }
}
