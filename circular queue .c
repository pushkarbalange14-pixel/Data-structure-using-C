#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main() {
    int queue[100]; // Max capacity container
    int size;
    int front = -1, rear = -1;
    int choice, value;

    clrscr();

    printf("Enter the size of the Circular Queue: ");
    scanf("%d", &size);

    while (1) {
        printf("\n--- Circular Queue Menu ---\n");
        printf("1. Insert (Enqueue)\n");
        printf("2. Delete (Dequeue)\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Check Overflow
                if ((rear + 1) % size == front) {
                    printf("\nQueue Overflow!\n");
                } else {
                    printf("Enter value: ");
                    scanf("%d", &value);

                    if (front == -1 && rear == -1) {
                        front = rear = 0;
                    } else {
                        rear = (rear + 1) % size;
                    }

                    queue[rear] = value;
                    printf("Inserted %d\n", value);
                }
                break;

            case 2:
                // Check Underflow
                if (front == -1) {
                    printf("\nQueue Underflow!\n");
                } else {
                    value = queue[front];
                    printf("\nDeleted element: %d\n", value);

                    if (front == rear) {
                        front = rear = -1;
                    } else {
                        front = (front + 1) % size;
                    }
                }
                break;

            case 3:
                // Display
                if (front == -1) {
                    printf("\nQueue is empty!\n");
                } else {
                    int i = front;
                    printf("\nQueue elements: ");
                    while (1) {
                        printf("%d ", queue[i]);
                        if (i == rear)
                            break;
                        i = (i + 1) % size;
                    }
                    printf("\n");
                }
                break;

            case 4:
                getch();
                exit(0);

            default:
                printf("\nInvalid choice!\n");
        }
    }
}
