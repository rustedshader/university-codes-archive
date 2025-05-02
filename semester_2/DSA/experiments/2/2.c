#include <stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5};
    int mid = 5/2;
    int end = 4;
    for (int i = 0 ; i<mid ; i++ , end--  ){
        int temp;
        temp = arr[i];
        arr[i] = arr[end];
        arr[end] = temp;
    }
    for (int i = 0 ;i <5 ; i++){
        printf("%d\n",arr[i]);
    }
}