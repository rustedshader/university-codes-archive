#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Queue {
int arr[MAX];
int front;
int rear;
};

void push(struct Queue *q , int val){
	if (q->rear == -1){
		q->rear++;
	}

	q->front++;
	q->arr[q->front] = val;
}

void pop(struct Queue *q ){
	q->front--;
}

void print(struct Queue *q){
int s = q->rear;
int e = q->front;

for (int i = s  ; i<=e ; i++)
{
printf("%d\n",q->arr[i]);
}
}


int main(){
	struct Queue *q  = (struct Queue*)malloc(sizeof(struct Queue));
	q->front = -1;
	q->rear = -1;
	push(q,10);
	push(q,20);
	push(q,30);
	push(q,40);
	push(q,50);
	push(q,60);
	push(q,70);
	push(q,80);
	push(q,90);
	print(q);
	printf("\n");
	pop(q);
	pop(q);
	pop(q);
	print(q);
	free(q);
	return 0;

}
