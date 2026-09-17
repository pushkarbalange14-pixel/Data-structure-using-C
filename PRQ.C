
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    int priority;
    struct node *next;
};

void main()
{
    struct node *front = NULL, *temp, *newnode;
    int choice, value, pri;

    clrscr();

    while(1)
    {
        printf("\n\n--- PRIORITY QUEUE ---");
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                newnode = (struct node *)malloc(sizeof(struct node));

                printf("\nEnter data: ");
                scanf("%d", &value);

                printf("Enter priority: ");
                scanf("%d", &pri);

                newnode->data = value;
                newnode->priority = pri;
                newnode->next = NULL;

                if(front == NULL || pri < front->priority)
                {
                    newnode->next = front;
                    front = newnode;
                }
                else
                {
                    temp = front;

                    while(temp->next != NULL &&
                          temp->next->priority <= pri)
                    {
                        temp = temp->next;
                    }

                    newnode->next = temp->next;
                    temp->next = newnode;
                }

                printf("\nElement inserted.");
                break;

            case 2:
                if(front == NULL)
                {
                    printf("\nQueue is empty.");
                }
                else
                {
                    temp = front;
                    front = front->next;

                    printf("\nDeleted element = %d", temp->data);
                    free(temp);
                }
                break;

            case 3:
                if(front == NULL)
                {
                    printf("\nQueue is empty.");
                }
                else
                {
                    temp = front;

                    printf("\nData\tPriority");
                    printf("\n----------------");

                    while(temp != NULL)
                    {
                        printf("\n%d\t%d",
                               temp->data,
                               temp->priority);

                        temp = temp->next;
                    }
                }
                break;

            case 4:
                exit(0);

            default:
                printf("\nInvalid choice.");
        }
    }

    getch();
}
