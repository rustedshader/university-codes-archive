#include <stdio.h>

int count_element(int *arr,int to_find,int n){
    int count = 0 ;
    for (int i = 0 ; i<n ; ++i){
        if (arr[i] == to_find ){
        count++;
        }
    }
return count;
}

int main(){
 int arr[] = {1,2,3,4,5};
    printf("%d\n",count_element(arr,3,5));
}