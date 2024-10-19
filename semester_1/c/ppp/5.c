#include <stdio.h>

int arr_sum(int arr[],int n){
    int sum = 0;
    for(int i = 0 ; i<n ; i++){
        sum+=arr[i];
    }
    return sum;
}


int main(){
    int arr[5] = {1,2,3,4,5};
    printf("%d\n",arr_sum(arr, 5));
}
