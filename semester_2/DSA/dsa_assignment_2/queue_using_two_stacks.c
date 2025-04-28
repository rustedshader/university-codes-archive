#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Stack{
	int arr[MAX_SIZE];
	int top;
};

void enque(struct Stack *s1, int val){
s1->top++;
s1->arr[s1->top] = val;
}

void deque(struct Stack *s2){
	s2->top--;
}

int main(){
struct Stack *stack1 = (struct Stack*)malloc(sizeof(struct Stack));
struct Stack *stack2 = (struct Stack*)malloc(sizeof(struct Stack));
stack1->top = -1;
stack2->top = -1;
enque(stack1,5);
return 0;
}
