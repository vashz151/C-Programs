#include<stdio.h>
#include<conio.h>
void main()
{
      int i,j;
      clrscr();
      for(i=1;i<=5;i++)
      {
	 if(i%2!=0)
	 {
	      for(j=1;j<=i;j++)
	      {
		   printf("%d",j);
	      }
	 }
	 else
	 {
	      for(j=i;j>=1;j--)
	      {
		   printf("%d",j);
	      }
	 }
	 printf("\n");
      }
      getch();
}