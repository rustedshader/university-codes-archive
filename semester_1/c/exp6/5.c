#include <stdio.h>

char* rev_string(char a[]){
    int i = 0;
    int string_len = 0;
    while(a[i] != '\0'){
        string_len += 1;
        i++;
    }
    int m = string_len / 2;
    for(int i = 0 , k = string_len-1 ; i <= m ; i++ , k--){
        char temp = a[i];
        a[i] = a[k];
        a[k] = temp;
    }
    return a;
}

int main(){
    char x[] = "shubhang";
    printf("%s", rev_string(x));
}
