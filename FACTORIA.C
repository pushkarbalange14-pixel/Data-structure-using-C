#include<stdio.h>
#include<conio.h>
#include<math.h>
long long fact(int n)
{
   if(n==0||n==1)
   {
   return 1;
   }
   else
   {
   return n*fact(n-1);
   }

}
void main()
{
 long n;
 clrscr();
 printf("Enter the number :");
 scanf("%d",&n);
 printf(" The fatorial of number is %d",abs(fact(n)));
 getch();
 }






