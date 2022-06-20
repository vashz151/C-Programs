#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,k;
   clrscr();
   for(i=1,k=5;i<=5;i++,k--)
   {
     for(j=1;j<=i;j++)
     {
	printf("%d ",k);
     }
     printf("\n");
   }
   getch();
}