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
    ss->top++;
    ss->arr[ss->top] = data;
}

int main()
{
    struct Stack *ss = (struct Stack *)malloc(sizeof(struct Stack));
    ss->top = -1;
    int input;
    char data;
    state = 1;

    while (state)
    {
        printf("Enter 1 for Push\n");
        printf("Enter 2 for Pop\n");
        printf("Enter 3 for Print\n");
        printf("Enter 0 to Exit\n");
        scanf("%d", &input);

        switch (input)
        {
        case 0:
            state = 0;
            break;
        case 1:
            printf("Enter character to push: ");
            scanf(" %c", &data);
            push(ss, data);
            break;
        case 2:
            if (ss->top >= 0)
                pop(ss);
            else
                printf("Stack is empty!\n");
            break;
        case 3:
            print_stack(ss);
            break;
        default:
            printf("Invalid choice!\n");
        }
    }

    free(ss);
    return 0;
}