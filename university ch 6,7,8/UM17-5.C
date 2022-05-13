#include<stdio.h>
#include<conio.h>
void main()
{
     int i,n,max,min,a[100];
     clrscr();
     printf("Enter number of elements:");
     scanf("%d",&n);
     for(i=0;i<=n-1;i++)
     {
	  printf("Enter a value:");
	  scanf("%d",&a[i]);
     }
     max=a[0];
     min=a[0];
     for(i=0;i<=n-1;i++)
     {
	  if(a[i]>max) max=a[i];
	  if(a[i]<min) min=a[i];
     }
     printf("Maximum element is %d\nMinimum element is %d",max,min);
     getch();
}