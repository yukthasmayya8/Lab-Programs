/*
Develop a C-based expression conversion tool that uses stack data structure
to convert arithmetic expressions from infix notation to postfix notation. The tool should support alphanumeric operands, paranthesis and the operators(+, -, *, /, %, ^, $) analyse the correctness of the conversion by testing various valid expressions
*/

#include <stdio.h>
#include <stdlib.h>

char infix[30], postfix[30], stack[30];
int top = -1;

void push(char item)
{
    stack[++top] = item;
}

char pop()
{
    char item;
    item = stack[top--];
    return item;
}

int prec(char symb)
{
    int p;
    switch (symb)
    {
    case '#':
        p = -1;
        break;
    case '(':
    case ')':
        p = 0;
        break;
    case '+':
    case '-':
        p = 1;
        break;
    case '*':
    case '/':
    case '%':
        p = 2;
        break;
    case '^':
    case '$':
        p = 3;
        break;
    }
    return p;
}

void evaluate()
{
    int i = 0, j = 0;
    char symb, temp;

    push('#');

    for (i = 0; infix[i] != '\0'; i++)
    {
        symb = infix[i];

        switch (symb)
        {
        case '(':
            push(symb);
            break;

        case ')':
            temp = pop();

            while (temp != '(')
            {
                postfix[j++] = temp;
                temp = pop();
            }
            break;

        case '+':
        case '-':
        case '*':
        case '/':
        case '%':
        case '^':
        case '$':
            while (prec(stack[top]) >= prec(symb))
            {
                temp = pop();
                postfix[j++] = temp;
            }
            push(symb);
            break;

        default:
            postfix[j++] = symb;
        }
    }

    while (top > 0)
    {
        temp = pop();
        postfix[j++] = temp;
    }

    postfix[j] = '\0';
}

int main()
{
    printf("\nEnter the valid infix expression:\t");
    scanf("%29s", infix);

    evaluate();

    printf("\nThe entered infix expression is:\n %s\n", infix);
    printf("\nThe corresponding postfix expression is:\n %s\n", postfix);

    return 0;
}

/*
    Output:
    Enter the valid infix expression: (a+b^d)*(e/f)
    The entered infix expression is:
    (a+b^d)*(e/f)
    The corresponding postfix expression is:
    abd^+ef/*
*/
