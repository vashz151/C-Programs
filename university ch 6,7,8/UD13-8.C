#include<stdio.h>
#include<conio.h>
void main()
{
     int i,n,a[100],large;
     clrscr();
     printf("Enter number of elements:");
     scanf("%d",&n);
     for(i=0;i<=n-1;i++)
     {
	  printf("Enter an element:");
	  scanf("%d",&a[i]);
     }
     large=a[0];
     for(i=0;i<=n-1;i++)
     {
	  if(large<a[i]) large=a[i];
     }
     printf("Largest element is:%d",large);
     getch();
}