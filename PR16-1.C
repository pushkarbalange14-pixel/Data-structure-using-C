#include <stdio.h>
#include <conio.h>

void main()
{
    int n, value, choice, i;
    int top = -1;
    int stack[50];

    printf("Enter the size of stack: ");
    scanf("%d", &n);

    while (1)
    {
	printf("\n SELECT AN OPTION PLEASE n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
		if (top == n - 1)
                {
                    printf("Stack Overflow\n");
                }
                else
                {
		    printf("Enter value: ");
		    scanf("%d", &value);

                    top++;
                    stack[top] = value;


		}
                break;

            case 2:
                if (top == -1)
                {
                    printf("Stack Underflow\n");
                }
                else
                {
                    printf("%d popped from stack\n", stack[top]);
                    top--;
                }
                break;

            case 3:
                if (top == -1)
                {
                    printf("Stack is empty\n");
                }
                else
                {
                    printf("Top element = %d\n", stack[top]);
                }
                break;

            case 4:
                if (top == -1)
                {
                    printf("Stack is empty\n");
                }
                else
                {
                    printf("Stack elements:\n");

                    for (i = top; i >= 0; i--)
                    {
                        printf("%d\n", stack[i]);
                    }
                }
                break;

            case 5:
                return 0;

            default:
                printf("Invalid choice\n");
        }

    }
	 getch();
}
