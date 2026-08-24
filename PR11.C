#include<stdio.h>
#include<conio.h>
#include<string.h>

void main ()
{
  int i,j,n;
  char a[100][100],temp[100];
     clrscr();

	printf("  Enter array size\n ");
	scanf("%d",&n);

	printf("\n Enter array elements");
	for(i=0;i<n;i++)
	{
	  scanf("%s",a[i]);
	}

	printf(" \nThe array is\n ");
	for(i=0;i<n;i++)
	{
	  printf(" %s ",a[i]);
	}

	for(i=1;i<n;i++)
	{
	 strcpy(temp,a[i]);
	 j=i-1;
	 while(j>=0 && strcmp(a[j],temp)<0)
	 {
	     strcpy(a[j+1],a[j]);
	     j--;
	 }
	 strcpy(a[j+1],temp);
	}

	printf(" \nThe sorted array is\n ");
	for(i=0;i<n;i++)
	{
	  printf(" %s ",a[i]);
	}

	getch();

	}


