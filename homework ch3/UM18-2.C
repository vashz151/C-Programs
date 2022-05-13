#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
   int i,n,sum=0,term;
   clrscr();
   printf("Enter the value of n:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      term=pow(i,i);
      sum=sum+term;
   }
   printf("Sum of the series is=%d",sum);
   getch();
}
