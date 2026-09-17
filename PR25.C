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
    int choice, value, pri,op;
    clrscr();

    start:

    printf("\n Select your option to perform: \n1-Enqueue \n2-Dequeue \n3-Display\n");
    scanf("%d",&choice);

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

	     while(temp->next != NULL &&  temp->next->priority <= pri)

		{
		   temp = temp->next;
		}

		newnode->next = temp->next;
		temp->next = newnode;
	     }


		break;

            case 2:
                if(front == NULL)
                {
		    printf("\n Queue Underflow");
                }
                else
                {
                    temp = front;
                    front = front->next;

		    printf(" The element deleted is %d",temp->data);
		    free(temp);
                }
		break;

	    case 3:
		  if(front==NULL)
		  {
		   printf(" \n Queue is Empty ");
		  }

	       else
	       {
		  temp=front;

		while(temp!=NULL)
		{

		printf("\n%d     %d\n",temp->data,temp->priority);
		temp=temp->next;

		}
	      }
	      break;

	 default :

		   printf(" Exit Successful :") ;


	   }

      printf("\n\n Any other operations ? \n");
      scanf("%d",&op);
      if(op==1)
      goto start;

      getch();
  }


















