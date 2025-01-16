#include <stdio.h>

void duplicate_elements(int *arr, int n){
    for (int i = 0 ; i<n ; i++){
        int count = 0 ;
        for (int k =i; k<n;k++){
            if (arr[i] == arr[k]){
                count++;
            }
        }
    if (count > 1 ){
            printf("Duplicate Found for: %d\n",arr[i]);
        }   
    }
    
}

int main(){
 int arr[] = {1,2,2,4,5};
  duplicate_elements(arr,5);
}