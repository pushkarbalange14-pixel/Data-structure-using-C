#include <stdio.h>
#include <conio.h>

int multiply(int a, int b)
{
    if (b == 0)
        return 0;
    else
        return a + multiply(a, b - 1);
}

void main()
{
    int a, b, result;

    clrscr();

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    result = multiply(a, b);

    printf("Multiplication = %d", result);

    getch();
}
