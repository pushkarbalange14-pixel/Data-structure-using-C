#include <stdio.h>

int main()
{
    int queue[5];
    int front = -1, rear = -1;
    int choice, value, i;

    do
    {
        printf("\n--- QUEUE MENU ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                if (rear == 4)
                {
                    printf("Queue is Full!\n");
                }
                else
                {
                    printf("Enter value: ");
                    scanf("%d", &value);

                    if (front == -1)
                        front = 0;

                    rear++;
                    queue[rear] = value;

                    printf("%d inserted.\n", value);
                }
                break;

            case 2:
                if (front == -1 || front > rear)
                {
                    printf("Queue is Empty!\n");
                }
                else
                {
                    printf("%d deleted.\n", queue[front]);
                    front++;

                    if (front > rear)
                    {
                        front = -1;
                        rear = -1;
                    }
                }
                break;

            case 3:
                if (front == -1 || front > rear)
                {
                    printf("Queue is Empty!\n");
                }
                else
                {
                    printf("Peek element: %d\n", queue[front]);
                }
                break;

            case 4:
                if (front == -1 || front > rear)
                {
                    printf("Queue is Empty!\n");
                }
                else
                {
                    printf("Queue: ");

                    for (i = front; i <= rear; i++)
                    {
                        printf("%d ", queue[i]);
                    }

                    printf("\n");
                }
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 5);

    return 0;
}
