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
    struct node *head, *temp, *newnode,*prev;
    int ch,choice,op,pos,i;
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

	printf("Enter choice (1 to continue, 0 to stop):\n ");
	scanf("%d", &ch);

    } while (ch == 1);



     start:
    printf(" Enter choice \n1-Display \n2-Delete at beggining \n3-Delete at end \n4 Delete at particular position\n");
    scanf("%d",&choice);
     switch(choice)
     {
       

       case 1:
		printf("\nLinked List: ");

	       temp = head;

	      while (temp != NULL)
	      {
		printf(" %d ", temp->data);
		temp = temp->next;
	      }
		break;
 


          case 2:
		       if (head==NULL)
		       {
			  printf(" List is EMPTY");

			 }


		       else
		       {
			  temp=head;
			  head=head->next;
			  free(temp);

			  }

			  break;
		case 3 :
			if(head==NULL)
			{

			printf(" List is EMPTY");

			}

		      else if (head->next==NULL)
		      {
			 free(head);
			 head=NULL;

		      }

		      else
		      {
			  temp=head;
			  while(temp->next!=NULL)
			  {
			     prev=temp;
			     temp=temp->next;

			   }
			   prev->next=NULL;
			   free(temp);
			   }

			   break;


	       case 4:
		    printf(" Enter the position:");
		    scanf("%d",&pos);

		   if(head==NULL)
		   {
		     printf(" List is Empty ");

		    }
		  else if(pos==1)
		  {
		  temp=head;
		  head=head->next;
		  free(temp);
		  }

		  else
		  {
		    temp=head;
		    for( i=1;i<pos;i++)
		    {
		    prev=temp;
		    temp=temp->next;
		     }

		      prev->next=temp->next;
		      free(temp);

		      }
		      break;

		 default :

		  printf(" Invalid");

		  }
		     printf("  \nEnter to perform more operations  \n1.YES \n2.NO\n");
		     scanf("%d",&op);

		if(op==1)
		{
		goto start;

		}
		else
		{
		goto end;

		}
		    end:
		  getch();
		  }













