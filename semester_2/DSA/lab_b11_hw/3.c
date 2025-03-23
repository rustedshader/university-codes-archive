#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int precedence(char c)
{
    switch (c)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;
    default:
        return 0;
    }
}

void infixToPostfix(char *infix, char *postfix)
{
    char stack[100];
    int top = -1;
    int i = 0, j = 0;

    while (infix[i] != '\0')
    {
        if (isalnum(infix[i]))
        {
            postfix[j++] = infix[i];
        }
        else if (infix[i] == '(')
        {
            stack[++top] = infix[i];
        }
        else if (infix[i] == ')')
        {
            while (top >= 0 && stack[top] != '(')
            {
                postfix[j++] = stack[top--];
            }
            top--;
        }
        else if (isOperator(infix[i]))
        {
            while (top >= 0 && stack[top] != '(' &&
                   precedence(stack[top]) >= precedence(infix[i]))
            {
                postfix[j++] = stack[top--];
            }
            stack[++top] = infix[i];
        }
        i++;
    }

    while (top >= 0)
    {
        postfix[j++] = stack[top--];
    }

    postfix[j] = '\0';
}

int main()
{
    char infix[100], postfix[100];

    printf("Enter infix expression: ");
    fgets(infix, sizeof(infix), stdin);
    infix[strcspn(infix, "\n")] = 0;

    infixToPostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);

    return 0;
}