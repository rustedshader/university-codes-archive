#include <stdio.h>

int main(){
    int mat[2][3];
    int row = 2 , col = 3 ,i , j;
    printf("Enter element of matrix row wise column \n");
    for(i=0;i<row;i++){
        for(j=0; j<col;j++){
            scanf("%d",&mat[i][j]);
        }
    }
}
