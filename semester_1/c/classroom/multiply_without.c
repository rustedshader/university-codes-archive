#include <stdio.h>

int main(){
    int a , b;
    printf("Enter Number 1\n -> ");
    scanf("%d",&a);
    printf("Enter Number 2\n -> ");
    scanf("%d",&b);
    int multiply = 0;
    for (int i = 0;i<=b;i++){
        multiply += a;
    }
    printf("%d",multiply);
}
