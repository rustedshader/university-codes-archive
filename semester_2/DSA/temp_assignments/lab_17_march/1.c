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

void push(struct Stack *stack, char data){
    if (data == 'x'){
        state = 1;
    }

    if (state == 0 ){
    stack->arr[++stack->top] = data;
    input_size += 1;
    }
    else{
        if (data == stack->arr[stack->top]){
            printf("%c , %c\n",data,stack->arr[stack->top]);
           counter += 1; 
           pop(stack);
        }
    }
};


int main(){
    struct Stack *stack_st = (struct Stack*)malloc(sizeof(struct Stack));
    push(stack_st,'a');
    push(stack_st,'b');
    push(stack_st,'c');
    push(stack_st,'x');
    push(stack_st,'c');
    push(stack_st,'p');
    push(stack_st,'a');
    printf("%d\n",counter);
    if (input_size == counter){
        printf("%s\n","It is a palindrome");
    }
    else{
        printf("%s\n","It is not a palindrome");
    }
}