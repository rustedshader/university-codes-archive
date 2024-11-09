#include <string.h>
#include <stdio.h>

size_t string_len(char string[]){
    return strlen(string);
}

int main(){
char s[1000000];
printf("Enter a string\n -> ");
scanf("%s",s);
printf("Length of the string is %zu\n",string_len(s));
}
