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
    struct node *top = NULL;
    struct node *newnode;
    struct node *temp;
    int choice;

    clrscr();

menu:

    printf("\n\n===== STACK USING LINKED LIST =====");
    printf("\n1. PUSH");
    printf("\n2. POP");
    printf("\n3. PEEK");
    printf("\n4. DISPLAY");
    printf("\n5. EXIT");

    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:

            newnode = (struct node *)malloc(sizeof(struct node));

            printf("\nEnter data: ");
            scanf("%d", &newnode->data);

            newnode->next = top;
            top = newnode;

            printf("\n%d pushed into stack.", top->data);

            goto menu;


        case 2:

            if(top == NULL)
            {
                printf("\nStack Underflow!");
            }
            else
            {
                temp = top;

                printf("\n%d popped from stack.", top->data);

                top = top->next;

                free(temp);
            }

            goto menu;


        case 3:

            if(top == NULL)
            {
                printf("\nStack is empty.");
            }
            else
            {
                printf("\nTop element = %d", top->data);
            }

            goto menu;


        case 4:

            if(top == NULL)
            {
                printf("\nStack is empty.");
            }
            else
            {
                temp = top;

                printf("\nStack elements:\n");

                while(temp != NULL)
                {
                    printf("%d\n", temp->data);
                    temp = temp->next;
                }
            }

            goto menu;


        case 5:

            printf("\nExiting...");
            break;


        default:

            printf("\nInvalid choice!");
            goto menu;
    }

    getch();
}
