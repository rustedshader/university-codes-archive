#include <stdio.h>
#include <string.h>

char* string_concatinate(char to_concat[],char from_concat[]){
    return strcat(to_concat,from_concat);
}

int main(){
    char a[] = "shubhangsharma";
    char b[100000] = "prathamjain";
    printf("%s",string_concatinate(b, a));
}
