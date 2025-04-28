#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Queue
{
    int arr[MAX_SIZE];
    int rear;
    int front;
};

void enque(struct Queue *q, int val)
{
    q->rear += 1;
    q->arr[q->rear] = val;
}

void deque(struct Queue *q)
{
    q->front += 1;
}

void print_queue(struct Queue *q)
{
    for (int i = q->front; i <= q->rear; i++)
    {
        printf("%d\n", q->arr[i]);
    }
}

void print_first_element(struct Queue *q)
{
    printf("%d\n", q->arr[q->rear]);
}

void search_element(struct Queue *q, int val)
{
    for (int i = q->front; i <= q->rear; i++)
    {
        if (q->arr[i] == val)
        {
            printf("Value Found on index %d\n", i);
        }
    }
}

int main()
{
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->front = -1;
    q->rear = -1;
    while (-1 < 0)
    {
        printf("1) Add Value\n2) Add Deque\n3) Print Queue\n4) Print First Element\n5)Search Element\n6)Exit");
        int user_input;
        scanf("%d", &user_input);

        if (user_input == 1)
        {
            printf("Enter the value\n");
            int val;
            scanf("%d", &val);
            enque(q, val);
        }
        else if (user_input == 2)
        {
            deque(q);
        }
        else if (user_input == 3)
        {
            print_queue(q);
        }
        else if (user_input == 4)
        {
            print_first_element(q);
        }
        else if (user_input == 5)
        {
            printf("Enter the value\n");
            int val;
            scanf("%d", &val);
            search_element(q, val);
        }
        else if (user_input == 6)
        {
            break;
        }
        else
        {
            printf("Enter correct option");
        }
    }
    free(q);
    return 0;
}