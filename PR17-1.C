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
    int choice,o;

    clrscr();

    start:
    printf(" SELECT THE OPTION  \nPUSH\nPOP\nPEEK\nDISPLAY\nEXIT\n");
    scanf("%d",&choice);
    switch(choice)
    {
       case 1:  newnode = (struct node *)malloc(sizeof(struct node));
       newnode->next=NULL;
	   if(newnode==NULL)
	  {

	  printf(" Unable to Insert Node :");

	   }
	 else
	 {
	    printf(" Enter Element : ");
	    scanf("%d",&newnode->data);

	    newnode->next = top;
	    top = newnode;

	    printf("\n The Element Pushed Is : %d ", top->data);

	  }

	  break;


       case 2:
		 if(top == NULL)
	    {
		printf(" Underflow \n");
	    }
	    else
	    {
		temp = top;

		printf("\n Popped Element Is %d ", top->data);

		top = top->next;

		free(temp);
	    }

	    break;


       case 3:
	       if(top == NULL)
	    {
		printf("\n Empty Stack ");
	    }
	    else
	    {
		printf("\n The Top Element Is  = %d", top->data);
	    }

	    break;

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
	    break;

	      case 5:

	    printf("\n THANK YOU ");
	    break;


	default:

	    printf("Invalid choice");
	    break;
    }

     printf(" \n \n");
     printf(" ANY OTHER OPERATIONS ? \n1-YES\n2-NO\n");
     scanf("%d",&o);
     if(o==1)
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





