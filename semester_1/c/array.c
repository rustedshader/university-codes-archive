#include <stdio.h>

// int main(){
//     // int marks[4] = {10,20,30,40};
//     // float length[5] = {20.4,10.8,15.0};
//     // char ch[4] = {'h','e','l','l','o'};
//     int marks[] = {80,44,68,45,90,98};
//     for (int i =0 ; i<=3 ; i++){
//         printf("%d\n",marks[i]);
//     }


// }

// int main(){
//     int array[5];
//     printf("Enter 5 numbers to store them in array \n");
//     for (int i = 0 ; i<=4 ; i++){
//         scanf("%d\n",&array[i]);
//     }
//     printf("Element in the array are \n");
//     for (int i = 0 ; i<=4 ; i++){
//         printf("Element a[%d]=%d\n",i,array[i]);
//     }


//     return 0 ;

// }

// int main(){
//     int arr[4] = {2,4,8,16} , i = 3 , j ;
//     while(i--){
//         j = arr[i]+i;
//         printf("%d\n",j);    }
// }
// to find the maximum and minimum number from the array loop
// int main(){
//     int i = 0 ,arr[7]={4,2,6,1,5,10,-100};
//     int  max = arr[0];
//     int min = arr[0];
//     while(i<7){
//         if(max < arr[i]){
//             max = arr[i];
//         }
//         if( min > arr[i]){
//             min = arr[i];
//         }
//         i++;

//     }
//     printf("%d\n%d\n",max,min);
// }


// int main(){

//     int ARRAY_SIZE = 5;
//     int arr[5] = {1,2,3,4,5};
//     int m ;
//     if (ARRAY_SIZE % 2 == 0){
//         m = ARRAY_SIZE/2;
//     }
//     else{
//         m = (ARRAY_SIZE-1)/2;
//     }

//     for(int i = 0 ,j=ARRAY_SIZE-1 ; i<m ; i++,j--){
//         int temp_i = arr[j];
//         int temp_j = arr[i];
//         arr[i] = temp_i;
//         arr[j] = temp_j;
//     }

//     for (int i = 0 ; i<=ARRAY_SIZE-1 ; i++){
//         printf("%d ",arr[i]);
//     }
// }

// int main(){
//     int sum = 0 , arr[5] = {5,10,15,20,25};
//     int ARRAY_SIZE = 5;
//     for (int i = 0; i<=ARRAY_SIZE-1;i++){
//         sum+=arr[i];
//     }
//     printf("%d\n",sum);
// }
