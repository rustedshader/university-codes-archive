#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Stack{
    char arr[MAX_SIZE];
    int top;
};

int state = 0;
int counter = 0;
int input_size = 0;

void pop(struct Stack *stack){
    stack->top--;
}


int corresponding_par_comp(char p,char q){
    if (p == '{' && q == '}'){
        return 1;
    }
    if (p == '(' && q == ')'){
        return 1;
    }
    if (p == '[' && q == ']'){
        return 1;
    }
    return 0;    
}
// {{{{{}}}}}
void push(struct Stack *stack, char data){
    if (data == ')' || data == '}' || data == ']'){
        state = 1;
    }

    if (state == 0 ){
    stack->arr[++stack->top] = data;
    input_size += 1;
    }
    else{
        if (corresponding_par_comp(stack->arr[stack->top],data) > 0 ){
            printf("Corresponding Match Found\n");
            printf("%c , %c\n",stack->arr[stack->top],data);
           counter += 1; 
           pop(stack);
        }
    }
};




int main(){
    struct Stack *stack_st = (struct Stack*)malloc(sizeof(struct Stack));
    push(stack_st,'{');
    push(stack_st,'[');
    push(stack_st,'(');
    push(stack_st,')');
    push(stack_st,']');
    push(stack_st,'}');
    printf("%d\n",counter);
    if (input_size == counter){
        printf("%s\n","It is a Equal Parenthesis");
    }
    else{
        printf("%s\n","It is not a Equal Parenthesis");
    }
}