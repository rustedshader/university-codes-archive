#include <stdio.h>

int to_find(int *arr,int to_find,int n){
    
    for (int i = 0 ; i<n ; ++i){
        if (arr[i] == to_find ){
            return i;
        }
    }
    return -1;
}


int main(){
    int arr[] = {1,2,3,4,5};
    printf("%d\n",to_find(arr,3,5));
}