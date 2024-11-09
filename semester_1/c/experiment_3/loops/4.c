/* Year Rate Increment */
#include <stdio.h>
float rate_increament(int p){
    float x = p * 0.1;
    return p+x;
}

int main(){
    float p = 10000;
    for(int i =0; i<=10;i++){
        p = rate_increament(p);
        printf("%.2f\n",p);
    }

}
