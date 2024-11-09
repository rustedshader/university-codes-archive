/* Show the following output b part */
#include <stdio.h>
/*
1 -> 1
11 -> 3
121 -> 6
1331 ->10
14641 -> 15
*/


int main(){
    int n = 0;
    int k = 2;
    int temp = 1;
    for (int i = 1; i<=6;i++){
        printf("%d",temp);
        if(i == 2+(n-1)){
            printf("\n");
            n= n+k;
            k = k+1;
        }
        temp++;
    }
}
