#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,n,sign=1;
   float sum=0,term;
   clrscr();
   printf("Enter the number of terms:");
   scanf("%d",&n);
   for(i=1,j=1;i<=n;i++)
   {
     term=(float)j/(j+1);
     sum=sum+sign*term;
     j=j+2;
     sign=sign*-1;
   }
   printf("Sum=%f",sum);
   getch();
}