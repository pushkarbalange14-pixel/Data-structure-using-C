#include<stdio.h>
#include<conio.h>
void main ()
{
  int a[50],i,j,temp,n;
     clrscr();

	printf("  Enter array size\n ");
	scanf("%d",&n);

	printf("\n Enter array elements");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
	}

	printf(" \nThe array is\n ");
	for(i=0;i<n;i++)
	{
	  printf(" %d ",a[i]);
	}

	for(i=1;i<n;i++)
	{
	 temp=a[i];
	 j=i-1;
	 while(j>=0 && a[j]>temp)
	 {
	     a[j+1]=a[j];
	     j--;
	 }
	 a[j+1]=temp;
	}

	printf(" \nThe sorted array is\n ");
	for(i=0;i<n;i++)
	{
	  printf(" %d ",a[i]);
	}

	getch();

	}


