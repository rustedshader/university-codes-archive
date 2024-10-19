#include <stdio.h>

int main(){
    char a[100];
    int b;
    printf("Enter the Name\n -> ");
    scanf("%s",a);
    printf("Enter the Age\n -> ");
    scanf("%d",&b);
    printf("Name: %s\n", a);
    printf("Age: %d\n", b);
    return 0;
}
