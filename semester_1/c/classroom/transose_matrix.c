#include <stdio.h>

int main(){

    int row  = 2;
    int column = 3;
    int mat[row][column];
    for (int i = 0 ; i<row; i++ ){
        for (int k = 0 ; k<column  ; k++){
            scanf("%d",&mat[i][k]);
        }
    }


    for (int i = 0 ; i<row; i++ ){
        for (int k = 0 ; k<column  ; k++){
            printf("%d ",mat[i][k]);
        }
        printf("\n");
    }
    printf("\n");
    printf("----------");
    printf("\n");
    int temp_mat[column][row];
    for (int i = 0 ; i<row; i++ ){
        for (int k = 0 ; k<column  ; k++){
            temp_mat[k][i] = mat[i][k];
        }
    }
    for (int i = 0 ; i<column; i++ ){
        for (int k = 0 ; k<row  ; k++){
            printf("%d ",temp_mat[i][k]);
        }
        printf("\n");

    }

}
