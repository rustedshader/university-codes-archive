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
void n_int(struct Queue *q , int n){
	int count = 0;
	for (int i = q->rear ; i<=q->front ; i++){
			if (q->arr[i] < 0){	
				count += 1;

			}
		if ((i+1) % n == 0){
			printf("%d\n",count);
			count = 0;
		}
	}
	printf("%d\n",count);


}


int main(){
	struct Queue *q  = (struct Queue*)malloc(sizeof(struct Queue));
	q->front = -1;
	q->rear = -1;
	enqueu(q,10);
	enqueu(q,20);
	enqueu(q,30);
	enqueu(q,-1);
	enqueu(q,30);
	enqueu(q,30);
	enqueu(q,30);
	enqueu(q,-1);
	enqueu(q,-1);
	enqueu(q,-1);
	n_int(q,4);
	free(q);
	return 0;

}
