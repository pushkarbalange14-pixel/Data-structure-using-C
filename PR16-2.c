#include <stdio.h>
#include <conio.h>

void main()
{
    int stack[10];
    int top = -1;

    top++;
    stack[top] = 10;
    printf("Pushed 10\n");

    top++;
    stack[top] = 20;
    printf("Pushed 20\n");

    if (top == -1)
        printf("Stack Underflow\n");
    else
    {
        printf("Popped %d\n", stack[top]);
        top--;
    }

    top++;
    stack[top] = 10;
    printf("Pushed 10\n");

    top++;
    stack[top] = 20;
    printf("Pushed 20\n");

    if (top == -1)
        printf("Stack Underflow\n");
    else
    {
        printf("Popped %d\n", stack[top]);
        top--;
    }

    if (top == -1)
        printf("Stack Underflow\n");
    else
    {
        printf("Popped %d\n", stack[top]);
        top--;
    }

    if (top == -1)
        printf("Stack Underflow\n");
    else
    {
        printf("Popped %d\n", stack[top]);
        top--;
    }

    if (top == -1)
        printf("Stack Underflow\n");
    else
    {
        printf("Popped %d\n", stack[top]);
        top--;
    }

    top++;
    stack[top] = 20;
    printf("Pushed 20\n");

    if (top == -1)
        printf("Stack Underflow\n");
    else
    {
        printf("Popped %d\n", stack[top]);
        top--;
    }

    getch();
}
