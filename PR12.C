#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void main()
{
    struct node *head, *temp, *newnode;
    int ch;

    head = NULL;

    do
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Enter choice (1 to continue, 0 to stop): ");
        scanf("%d", &ch);

    } while (ch == 1);

    printf("\nLinked List: ");

    temp = head;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    getch();
}
