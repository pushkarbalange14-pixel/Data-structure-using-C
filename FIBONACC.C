#include<stdio.h>
#include<conio.h>
#include<math.h>

int fib(int n)
{
    if(n==0)
   {
   return 0;
   }

    else if(n==1)

   {
    return 1;
   }

    else
   {
   return fib(n-1) + fib(n-2);
   }


}


void main()
{
  int n,i;
  clrscr();
  printf("Enter number of elements :");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  printf("%d ",fib(n));

  }
  getch();
  }