#include <stdio.h>
#include <string.h>

int string_compare(char a[] , char b[]){
    return strcmp(a, b);
}

int main(){
    char a[] = "shubhang";
    char b[] = "pratham";
    if (string_compare(a,b) == 0){
        printf("string are equal\n");
    }
    else{
        printf("string are not equal\n");
    }
    return 0;
}
