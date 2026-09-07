#include <stdio.h>
#include <conio.h>

void main()
{
    int queue[100];
    int front = -1, rear = -1;
    int choice, val, i,o,n;

    clrscr();
    printf(" Enter number of elements :\n");
    scanf("%d",&n);

	start:
	printf("\n Select option \n1-Enqueue\n2-Dequeue\n3-Display\n");


        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
		if ((rear + 1) % n == front)
                {
		    printf("\nQueue is Full");
                }
                else
                {
                    printf("\nEnter value: ");
		    scanf("%d", &val);

	   if (front == -1)
	       {
		   front = 0;
		   rear = 0;
	       }
	 else
	     {
	      rear = (rear + 1) % n;
	     }

	  queue[rear] = val;
	    }
	      break;

       case 2:
       if (front == -1)
	    {
	       printf("\nQueue is Empty");
	    }
	  else
	   {
	     val = queue[front];


	    if (front == rear)
	   {
		front = -1;
		rear = -1;
	   }
	     else
	     {
	     front = (front + 1) % n;
	     }
	   }
	   break;

	 case 3:
	   if (front == -1)
	   {
	 printf("\nQueue is Empty");
	    }
	  else
	     {
	       printf("\nQueue elements are: ");

	  i = front;

                    while (1)
                    {
                        printf("%d ", queue[i]);

			if (i == rear)
			break;


			i = (i + 1) % n;
                    }
                }
                break;
	      default:
		printf("\nExit");
        }


	printf("\n Any other operations ?\n1-Yes\n2-No");
	scanf("%d",&o);
	if(o==1)
       {
       goto start;
	}
}