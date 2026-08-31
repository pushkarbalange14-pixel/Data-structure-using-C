#include <stdio.h>
#include<conio.h>

void reverse(char str[], int i)
{
    if (str[i] == '\0')
	return;

    reverse(str, i + 1);
    printf("%c", str[i]);
}

void main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    printf("The Reverse String : ");
    reverse(str, 0);

    getch();
}
