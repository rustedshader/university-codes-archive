#include <stdio.h>

int find_missing(int *arr,int n){
    int missing;
    int t = n ;
    for (int i = 0 ; i<n ; i++){
        int contains = 0;
        for (int k = 0 ; k<n;k++){
            if (arr[k] == t){
                contains++;
            }
        }
        
        if (contains < 1 ){
            return -1;
        }
        t--;
    }
    return 1;
}

int main(){
    int arr[] = {1,2,3,4,5};
  printf("%d\n",find_missing(arr,5));

}