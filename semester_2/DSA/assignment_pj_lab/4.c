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


int main(){
	struct Queue *q  = (struct Queue*)malloc(sizeof(struct Queue));
	q->front = -1;
	q->rear = -1;

	while (1>0){
		printf("Enter 1 for enqueu");
		printf("Enter 2 for dequeu");
		printf("Enter 3 for printing queue");
		printf("Enter 4 to exit");
		printf("\n");
		
		int input;
		scanf("%d",&input);

		if (input == 1){
			printf("Enter the value: \n");
			int val;
			scanf("%d",&val);
			enqueu(q,val);
		}
		else if (input == 2){
			dequeue(q);
		}else if( input == 3){
			print(q);
		}else if (input == 4){
			break;
		}else{
			printf("Enter a valid input\n");
		}
	}
	free(q);
	return 0;

}
