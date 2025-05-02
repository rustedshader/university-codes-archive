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

for (int i = s  ; i<=e ; i++)
{
printf("%d\n",q->arr[i]);
}
}


void reverse_k(struct Queue *q , int k ){
for (int i = 0  ; i < k-1  ; i++){
int t = q->arr[i];
q->arr[i]  = q->arr[k-i-1];
q->arr[k-i-1] = t;
}

}

int main(){
	struct Queue *q  = (struct Queue*)malloc(sizeof(struct Queue));
	q->front = -1;
	q->rear = -1;
	enqueu(q,10);
	enqueu(q,20);
	enqueu(q,30);
	enqueu(q,40);
	enqueu(q,50);
	enqueu(q,60);
	enqueu(q,70);
	enqueu(q,80);
	enqueu(q,90);
	reverse_k(q,4);
	print(q);
	free(q);
	return 0;

}
