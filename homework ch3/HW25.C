#include<stdio.h>
#include<conio.h>
void main()
{
      int i,n,d,sum=0;
      clrscr();
      printf("Enter the number:");
      scanf("%d",&n);
      while(n!=0)
      {
	  d=n%10;
	  i=d*d;
	  sum=sum+i;
	  n=n/10;
      }

      printf("Sum=%d",sum);
      getch();
}