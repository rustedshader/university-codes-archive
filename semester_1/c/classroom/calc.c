#include <stdio.h>

int calculate(int a,int b,char operator){
    if(operator == '+'){
        return a+b;
    }
    if (operator == '-'){
        return a-b;
    }
    if (operator == '*'){
        return a*b;
    }
    if (operator == '/'){
        return a/b;
    }
    else{
        return 0;
    }
}

int main(){
    int a ,b;
    char operator;
    printf("Enter the expression\n -> ");
    scanf("%d %c %d",&a,&operator,&b);
    printf("%d",calculate(a,b, operator));
    return 0;
}
