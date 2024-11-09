#include <stdio.h>

int main(){
    int col1;
    int row1;
    int col2;
    int row2;

    printf("Enter the rows for matrix 1: ");
    scanf("%d",&row1);
    printf("Enter the colums for matrix 1: ");
    scanf("%d",&col1);
    printf("Enter the rows for matrix 2: ");
    scanf("%d",&row2);
    printf("Enter the col for matrix 2: ");
    scanf("%d",&col2);


    int mat_one[row1][col1];
    int mat_two[row2][col2];
    int mat_mult[row1][col2];
    for (int i =0 ; i<= row1-1 ; i++ ){
        for (int k =0 ; k<= col1-1; k++ ){
            int temp;
            printf("Enter the number for the row %d and the column %d for Matrix 1: ",i,k);
            scanf("%d",&temp);
            mat_one[i][k] = temp;
        }
    }
    for (int i =0 ; i<= row2-1 ; i++ ){
        for (int k =0 ; k<= col2-1; k++ ){
            int temp;
            printf("Enter the number for the row %d and the column %d for Matrix 2: ",i,k);
            scanf("%d",&temp);
            mat_two[i][k] = temp;
        }
    }

    for (int i = 0; i < row1; i++) {
           for (int j = 0; j < col2; j++) {
               mat_mult[i][j] = 0;
               for (int k = 0; k < row2; k++) {
                   mat_mult[i][j] += mat_one[i][k] * mat_two[k][j];
               }
                printf("%d\t", mat_mult[i][j]);
           }
           printf("\n");
       }


    return 0;
}
