#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void insert(int value)
{
    if (rear == SIZE - 1)
        printf("Queue is full\n");
    else
    {
        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = value;
        printf("%d inserted\n", value);
    }
}

void delete()
{
    if (front == -1 || front > rear)
        printf("Queue is empty\n");
    else
    {
        printf("%d deleted\n", queue[front]);
        front++;
    }
}

int main()
{
    insert(10);
    insert(20);
    insert(30);

    delete();
    delete();

    return 0;
}
