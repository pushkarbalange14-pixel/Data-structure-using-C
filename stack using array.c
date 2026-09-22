#include <stdio.h>
#define SIZE 5

int stack[SIZE], top = -1;

void push(int value)
{
    if (top == SIZE - 1)
        printf("Stack Overflow\n");
    else
    {
        top++;
        stack[top] = value;
        printf("%d pushed\n", value);
    }
}

void pop()
{
    if (top == -1)
        printf("Stack Underflow\n");
    else
    {
        printf("%d popped\n", stack[top]);
        top--;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    pop();
    pop();

    return 0;
}
