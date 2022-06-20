#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,n;
   float sum=0,term;
   clrscr();
   printf("Enter the number of terms:");
   scanf("%d",&n);
   for(i=1,j=1;i<=n;i++)
   {
     term=(float)j/(j+1);
     sum=sum+term;
     j=j+2;
   }
   printf("Sum=%f",sum);
   getch();
}