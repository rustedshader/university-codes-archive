#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int state = 0;
int match = 0;
int size_of_stack = 0;

struct Stack
{
    char arr[MAX_SIZE];
    int top;
};

void pop(struct Stack *ss)
{
    ss->top--;
}

void print_stack(struct Stack *ss)
{
    int t_top = ss->top;
    while (t_top > -1)
    {
        printf("%c\n", ss->arr[t_top]);
        t_top--;
    }
}

void push(struct Stack *ss, char data)
{
    if (ss->arr[ss->top] == data)
    {
        pop(ss);
        return;
    }
    ss->top++;
    ss->arr[ss->top] = data;
}

int main()
{
    struct Stack *ss = (struct Stack *)malloc(sizeof(struct Stack));
    ss->top = -1;
    push(ss, 'c');
    push(ss, 'a');
    push(ss, 'r');
    push(ss, 'e');
    push(ss, 'e');
    push(ss, 'r');
    push(ss, 'm');
    push(ss, 'o');
    push(ss, 'n');
    push(ss, 'k');
    print_stack(ss);
    free(ss);
    return 0;
}