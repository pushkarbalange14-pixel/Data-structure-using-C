#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char str[100], o[100], stack[100];
   int top = -1;
   int i, q;
    clrscr();

    printf("Enter a string: ");
    gets(str);

    q = strlen(str);

    strcpy(o, str);

     for(i = 0; i < q; i++)
    {
        top++;
        stack[top] = str[i];
      }

    printf("\n String Reversed \n");
   for(i = top; i >= 0; i--)
    {
        printf("%c", stack[i]);
      }

     for(i = 0; i < q; i++)
    {
        str[i] = stack[top];
        top--;
      }
     str[i] = '\0';


    if(strcmp(o, str) == 0)
	printf("\nPalindrome\n ");
     else
       printf("\n Not Palindrome \n");

    getch();
}
