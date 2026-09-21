#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Structure for a queue node
struct Node {
    int data;
    struct Node* next;
};

void main() {
    struct Node* front = NULL;
    struct Node* rear = NULL;
    struct Node* temp = NULL;

    int choice, value;

    // Clear the screen
    clrscr();

    while (1) {
        printf("\n--- Queue Using Linked List ---\n");
        printf("1. Insert (Enqueue)\n");
        printf("2. Delete (Dequeue)\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Insert Operation (Enqueue)
                temp = (struct Node*)malloc(sizeof(struct Node));
                if (temp == NULL) {
                    printf("\nQueue Overflow! Memory allocation failed.\n");
                } else {
                    printf("Enter value to insert: ");
                    scanf("%d", &value);

                    temp->data = value;
                    temp->next = NULL;

                    if (front == NULL && rear == NULL) {
                        front = rear = temp;
                    } else {
                        rear->next = temp;
                        rear = temp;
                    }
                    printf("Successfully inserted %d into the queue.\n", value);
                }
                break;

            case 2:
                // Delete Operation (Dequeue)
                if (front == NULL) {
                    printf("\nQueue Underflow! Queue is empty.\n");
                } else {
                    temp = front;
                    printf("\nDeleted element: %d\n", front->data);

                    front = front->next;

                    if (front == NULL) {
                        rear = NULL;
                    }

                    free(temp);
                }
                break;

            case 3:
                // Display Queue Elements
                if (front == NULL) {
                    printf("\nQueue is empty!\n");
                } else {
                    temp = front;
                    printf("\nQueue elements: ");
                    while (temp != NULL) {
                        printf("%d -> ", temp->data);
                        temp = temp->next;
                    }
                    printf("NULL\n");
                }
                break;

            case 4:
                // Exit Program
                printf("\nExiting program...\n");
                getch();
                exit(0);

            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    }
}
