#include <stdio.h>
#include<conio.h>

void main()
{
    int queue[500];
    int front=-1,rear=-1;
    int choice, value, i,n,o;
    clrscr();

    printf(" Enter number of stack elements ");
    scanf("%d",&n);


    start:
	printf("\n1-Enqueue\n2-Dequeue\n3-Peek\n4-Display\n");

	printf("Enter your choice  ");
	scanf("%d", &choice);

	switch (choice)

      {

	 case 1:


	if (rear == n-1)

	       {
		    printf("\nQueue is Full\n");
		}
		else
		{
		    printf("Enter value: ");
		    scanf("%d", &value);

		    if (front == -1)
			front = 0;

		    rear++;
		    queue[rear] = value;
		}
		break;

	case 2:
		  if (front == -1 || front > rear)
                {
		    printf("\nQueue is Empty\n");
                }
                else
                {
		    printf("%d deleted\n", queue[front]);
                    front++;

                    if (front > rear)
                    {
                        front = -1;
                        rear = -1;
                    }
                }
		break;

       case 3:
		if (front == -1 || front > rear)
                {
		    printf("\nQueue is Empty\n");
                }
                else
                {
		    printf("\nPeek element: %d\n", queue[front]);
                }
                break;

       case 4:
                if (front == -1 || front > rear)
                {
		    printf("\nQueue is Empty\n");
                }
		else
		{
		  printf(" \nQUEUE ");

		  for(i=front;i<=rear;i++)
		  {
		    printf(" %d ",queue[i]);

		  }
		 }
		break;



            default:
		printf("Invalid choice\n");
	}

	 printf(" \n Any Other Operations\n1-YES\n2-NO	 :");
	 scanf("%d",&o);
	 if(o==1)
	 goto start;

	 getch();

      }