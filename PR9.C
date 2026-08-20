#include<stdio.h>
#include<conio.h>\
#include<string.h>
void main ()
{
  int i,j,n,min=0;
  char a[100][150],temp[100];

  clrscr();
  printf("  Enter array size \n");
  scanf("%d",&n);

  printf(" Enter Array  ");
  for(i=0;i<n;i++)
  {
  scanf("%s",a[i]);
   }


  printf(" Entered array is\n   ");
 for (i=0;i<n;i++)
 {
 printf("  %s  ",a[i]);
 }
	 for (i=0;i<n-1;i++)
	 {
	   min = i;
	     for(j=i+1;j<n;j++)
	       {
		 if(strcmp(a[min],a[j])>0)
		   {
		       min=j;
		    }
		     strcpy( temp,a[i]);
		     strcpy( a[i],a[min]);
		     strcpy( a[min],temp);
	       }


	 }

     printf( " Sorted Array ");
     for(i=0;i<n;i++)
	{
	   printf("  %s ",a[i]);
	}



     getch();
     }