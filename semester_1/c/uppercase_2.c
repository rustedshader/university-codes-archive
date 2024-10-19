#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    printf("Enter String !\n-> ");
    scanf("%s",str);
    for(int i = 0;str[i];i++){
        str[i] = tolower(str[i]);
    }
    printf("%s\n",str);
    return 0 ;
}
