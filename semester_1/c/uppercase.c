#include <stdio.h>
#include <stdlib.h>
int main(){
    char str[40];
    int i ;
    printf("Enter a string in uppercase: ");
    scanf("%s",str);
    for(int i =0 ; str[i]!='\0';i++){
        char temp = str[i];
        str[i] = 32 + temp;
    }
    printf("String is lowercase !\n");
    printf("%s",str);
    return 0;
}
