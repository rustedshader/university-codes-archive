#include <stdio.h>
#include <string.h>

char* string_copy(char to_copy[],char from_copy[]){
    return strcpy(to_copy,from_copy);
}

int main(){
    char s[] = "shubhang";
    char x[1000];
    printf("%s",string_copy(x, s));
}
