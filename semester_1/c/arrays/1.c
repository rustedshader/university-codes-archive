#include <stdio.h>

int main(){
    int arr_len;
    printf("How many numbers  do you want to enter: ");
    scanf("%d",&arr_len);
    int arr[arr_len];
    int max;
    int t_max  =0;
    int max_index;
    for (int i =0 ; i<=arr_len-1; i++ ){
        int temp;
        printf("Enter the %d index number: ",i);
        scanf("%d",&temp);
        arr[i] = temp;
    }
    for (int i = 0 ; i<=arr_len-1; i++){
        if(i == 0){
            max = arr[i];
        }
        if (arr[i] >= max){
            max = arr[i];
            max_index = i;
        }
    }

    for (int i = 0 ; i<=arr_len-1; i++){
        if(i != max_index && arr[i] > t_max){
            t_max = arr[i];
        }
    }
    printf("Max is %d\nSecond Max is %d\n",max,t_max);
}
