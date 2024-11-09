#include <stdio.h>

int main(){

const int arr_len = 5;
int arr[arr_len] = {5,4,3,2,1};
int m = arr_len/2;

for (int i = 0, j = arr_len - 1 ; i<m ; i++,j--){
int temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}

for (int i = 0 ; i< arr_len ; i++){
printf("%d ",arr[i]);
}

return 0;
}
