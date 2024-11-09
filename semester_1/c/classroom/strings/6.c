#include <stdio.h>
#include <string.h>

int main(){
    char a[] = "shubhangpratham";
    char b[] = "ang";
    printf("Your substring starts from here: %s in %s\n",strstr(a, b),a);
}
