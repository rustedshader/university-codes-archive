#include <stdio.h>
int calsum(int x,int y,int z){
    return (x+y+z);
}

int main(){
    int a , b, c;
    printf("Enter the numbers you want to input: ");
    scanf("%d %d %d",&a,&b,&c);
    int sum = calsum(a,b,c);
    printf("%d",sum);
}
