#include <stdio.h>
#include <string.h>

void is_palandrome(char* a){
    int n = strlen(a);
    char temp[n+1];
    for(int i = n-1 , z=0  ; i>=0 ; i-- ,z++ ){
        temp[z] = a[i];
    }
    temp[n] = '\0';

    if (strcmp(a, temp) == 0) {
            printf("It is a palindrome\n");
        } else {
            printf("It is not a palindrome\n");
        }
}

int main(){
    char a[] = "dynamic";
    is_palandrome(a);

}
