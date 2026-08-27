#include <stdio.h>
#include <conio.h>
#include <string.h>

      void main()
{
     char stack[50];
     char str[50];
    int top = -1;
    int i,m;

    clrscr();

    printf(" Enter  string: ");
    gets(str);
    m=strlen(str) ;

    for (i = 0; i < m; i++)
    {
        top++;
        stack[top] = str[i];
    }

    printf(" Reversed string  ");

    while (top != -1)
    {
        printf("%c", stack[top]);
        top--;
    }

    getch();
}
