#include <stdio.h>

int main(){

int arr[5] = {1,3,2,7,5};
int z[5];
for (int i =0 ; i<5 ; i++)
{
int s = i;
for (int k=i+1 ; k<5; k++){
if (arr[k] < arr[s]){
s = k;
}
int temp = arr[i];
arr[i] = arr[s];
arr[s] = temp;
}


}

for(int j = 0 ; j<5 ; j++){
printf("%d",arr[j]);

}
}
