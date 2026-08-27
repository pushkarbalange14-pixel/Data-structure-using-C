#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], stack[100];
    int top = -1, i;

    printf("Enter a string: ");
    gets(str);


    for(i = 0; i < strlen(str); i++)
    {
       top++;
       stack[top] = str[i];
    }


    for(i = 0; top >= 0; i++)
    {
        str[i] = stack[top--];
    }

    str[i] = '\0';

   )
    strrev(str);

    printf("Reversed string: %s", str);

    return 0;
}
