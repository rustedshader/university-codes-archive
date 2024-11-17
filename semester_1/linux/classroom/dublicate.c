#include <stdio.h>

int main(){
    int duplicates = 0;
    // int arr[8] = {1,2,2,3,5,2,5,2};
    int n = 4;
    int arr[4] = {1,2,1,4};
    int count = 0;
    for(int i =0 ; i<n ; i++){
        int is_duplicate = 0;

        for (int k = i+1 ; k<n-1 ; k++){
            if (arr[k] == arr[i]){
                is_duplicate = 1;
            }
        }


        if (is_duplicate > 0){
            count++;
        }

    }

    printf("%d",count);


}
