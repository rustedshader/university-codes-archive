#include <stdio.h>
#include <string.h>

char* rev_string(char str[]){
    int n = strlen(str);
    int m =  n/2;
    for (int i = 0 , z = n-1; i<=m ; i++ , z--){
        char temp = str[i];
        str[i] = str[z];
        str[z] = temp;
    }
    return str;
}

int main(){
    char x[] = "arnav";
    printf("%s\n",rev_string(x));
}
