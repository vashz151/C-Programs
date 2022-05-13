#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
      int i=1,a,j,sum=0;
      clrscr();
      printf("Enter the value of a upto which sum has to be calculated:");
      scanf("%d",&a);
      do
      {   j=2*i-1;
	  sum=sum+j;
	  i++;
      }while(i<=a);
      printf("Sum=%d",sum);
      getch();
}