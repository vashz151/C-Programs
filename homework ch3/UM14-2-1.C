#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,k;
   clrscr();
   for(i=1,k=1;i<=4;i++)
   {
      for(j=1;j<=i;j++)
      {
	printf("%d ",k);
	k++;
      }
      printf("\n");
   }
   getch();
}