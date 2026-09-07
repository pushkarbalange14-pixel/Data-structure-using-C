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
    struct node *front = NULL, *rear = NULL, *newnode, *temp;
    int choice, value,o;

    clrscr();

	start:
	printf("\nSelect one option :\n1-ENQUEUE\n2-DEQUEUE\n3-DISPLAY\n4-EXIT");


        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                newnode = (struct node *)malloc(sizeof(struct node));

		printf("\nEnter value  ");
                scanf("%d", &value);

                newnode->data = value;
                newnode->next = NULL;

                if (front == NULL)
		{
                    front = newnode;
                    rear = newnode;
		}
		else
                {
                    rear->next = newnode;
                    rear = newnode;
                }


                break;

            case 2:
                if (front == NULL)
                {
                    printf("\nQueue is EMPTY");
                }
                else
                {
                    temp = front;
                    value = temp->data;

                    front = front->next;

                    if (front == NULL)
                        rear = NULL;

                    free(temp);


		}
                break;

            case 3:
                if (front == NULL)
                {
                    printf("\nQueue is EMPTY");
                }
                else
                {
                    temp = front;

                    printf("\nQueue elements are: ");

                    while (temp != NULL)
                    {
                        printf("%d ", temp->data);
                        temp = temp->next;
                    }
                }
                break;

            case 4:
                getch();
                return;

            default:
                printf("\nInvalid choice");
        }
      printf( " \nAnother operation ? \n1-YES\n2-NO");
      scanf("%d",&o);
      if(o==1)
    {  goto start;

    }
}
