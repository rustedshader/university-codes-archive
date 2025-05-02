#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Queue {
int arr[MAX];
int front;
int rear;
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

void print(struct Queue *q){
int s = q->rear;
int e = q->front;

for (int i = e  ; i>=s ; i--)
{
printf("%d",q->arr[i]);
}
}

void binary_converter(struct Queue *q,int k){
	if (k == 0)
	{
		return;
	}
	enqueu(q,k%2);
	binary_converter(q,k/2);
}


int main(){
	struct Queue *q  = (struct Queue*)malloc(sizeof(struct Queue));
	q->front = -1;
	q->rear = -1;
	binary_converter(q,10);
	print(q);
	free(q);
	return 0;

}
