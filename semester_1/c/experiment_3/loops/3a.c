/* Show the following output a part */
#include <stdio.h>
/*
* -> 1
** --> 3
*** --> 6
**** --> 10
0 = 2*0 + 1
*/

int main(){
    int n = 0;
    int k = 2;
    for (int i = 1; i<=6;i++){
        printf("%d",i);
        if(i == 2+(n-1)){
            printf("\n");
            n= n+k;
            k = k+1;
        }
    }
}
