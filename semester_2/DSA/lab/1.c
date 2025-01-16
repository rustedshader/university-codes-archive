#include <stdio.h>

int main(){
    int n;
    printf("Enter the number for how much you want of array\n");
    scanf("%d",&n);
    int i = 0;
    int arr[n];
    while(i < n){
        ++i;
        printf("Enter the number\n");
        scanf("%d",&arr[i]);
    }
    i = 0;
    while(i<n){
        ++i;
        printf("%d ",arr[i]);
    }
    return 0;
}