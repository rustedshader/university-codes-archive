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
        printf("%d\n", ss->arr[t_top]);
        t_top--;
    }
}

void push(struct Stack *ss, char data)
{
    if (data == 'X')
    {
        state = 1;
        size_of_stack = ss->top;
        return;
    }

    if (state == 0)
    {
        ss->top++;
        ss->arr[ss->top] = data;
    }
    else
    {
        if (ss->arr[ss->top] == data)
        {
            match += 1;
        }
        pop(ss);
    }
}

int main()
{
    struct Stack *ss = (struct Stack *)malloc(sizeof(struct Stack));
    ss->top = -1;
    push(ss, 'a');
    push(ss, 'b');
    push(ss, 'c');
    push(ss, 'X');
    push(ss, 'c');
    push(ss, 'b');
    push(ss, 'a');
    if (match == size_of_stack + 1)
    {
        printf("Its is a palindrome !\n");
    }
    else
    {
        printf("It is not a palindrome !\n");
    }
    free(ss);
    return 0;
}