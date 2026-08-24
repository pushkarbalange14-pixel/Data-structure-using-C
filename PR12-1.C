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
    int ch,choice,o;
    clrscr();

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

     start:
    printf(" Enter choice \n1-Insert at beggining \n2-Display \n3-Exit\n");
    scanf("%d",&choice);
     switch(choice)
     {
       case 1:

	     printf(" Insert at beggining");
	     newnode=(struct node *)malloc(sizeof (struct node));
	     printf(" Enter data");
	     scanf("%d",&newnode->data);
	     newnode->next=head;
	     head=newnode;
	     break;

       case 2:
		printf("\nLinked List: ");

	       temp = head;

	      while (temp != NULL)
	      {
		printf(" %d ", temp->data);
		temp = temp->next;
	      }
		break;



	default :

	       printf("  Invalid " );
	       break;

	       }


	       printf("  \n Any other operations ? \n 1-Yes \n 2-No\n ");
	       scanf("%d",&o);
	       if(o==1)
	       {
		 goto start;
		 }

		 else{
		 printf(" Done ");
		 }

	       getch();

	       }

























