#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Queue {
int arr[MAX];
int front;
int rear;
};

struct Stack{
	int arr[MAX];
	int top;
};

void push(struct Stack *s, int val){
	s->top++;
	s->arr[s->top] = val;
}

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

void print(struct Queue *q){
int s = q->rear;
int e = q->front;

for (int i = s  ; i<=e ; i++)
{
printf("%d\n",q->arr[i]);
}
}

void commen_element(struct Stack *s , struct Queue *q ){

	for (int i = q->rear ; i<= q->front ; i++){
		if (s->arr[i-q->rear] == q->arr[i]){
			printf("Common  Elements: %d\n",q->arr[i]);
		}


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
	enqueu(q,50);
	push(s,10);
	push(s,20);
	push(s,90);
	push(s,80);
	push(s,110);
	commen_element(s,q);
	free(q);
	return 0;

}
