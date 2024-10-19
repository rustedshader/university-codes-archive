#include <stdio.h>

/* row * column  */


void arr_mult(int arr1[3][3] , int arr2[3][3] , int r1 , int r2 , int c1 , int c2 ,int result[3][3]){

    // Perform matrix multiplication
    for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                result[i][j] = 0;
            }
        }

        // Perform matrix multiplication
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                for (int k = 0; k < c1; k++) {
                    result[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
}

int main(){

    int a[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
    int b[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
    int c[3][3];
    arr_mult(a,b,3,3,3,3,c);
    for(int i = 0 ; i<3 ; i++){
        for (int k = 0 ; k < 3 ; k++){
            printf("%d\n",c[i][k]);
        }
    }
}
