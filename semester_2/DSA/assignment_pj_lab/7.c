#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Queue {
int arr[MAX];
int front;
int rear;
};

struct Stack {
int arr[MAX];
int top;
};

void enqueu(struct Queue *q , int val){
	if (q->rear == -1){
		q->rear++;
	}

	q->front++;
	q->arr[q->front] = val;
}

void dequeue(struct Queue *q ){
	q->rear++;
}

void push(struct Stack *s , int val){
	s->top++;
	s->arr[s->top] = val;
}

void print(struct Queue *q){
int s = q->rear;
int e = q->front;

for (int i = s  ; i<=e ; i++)
{
printf("%d\n",q->arr[i]);
}
}

void interchange(struct Stack *s , struct Queue *q)
{
	for (int i = 0 ; i<=s->top ; i++){
	int t = s->arr[i];
	s->arr[i] = q->arr[i];
	q->arr[i] = t;
	}
}


int main(){
	struct Queue *q  = (struct Queue*)malloc(sizeof(struct Queue));
	struct Stack *s = (struct Stack*)malloc(sizeof(struct Stack));
	s->top = -1;	
	q->front = -1;
	q->rear = -1;
	enqueu(q,10);
	enqueu(q,20);
	enqueu(q,30);
	enqueu(q,40);
	push(s,50);
	push(s,60);
	push(s,70);
	push(s,80);
	interchange(s,q);
	printf("Queue is now:\n");
	print(q);
	free(q);
	return 0;

}
