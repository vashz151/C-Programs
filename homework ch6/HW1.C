#include<stdio.h>
#include<conio.h>
void main()
{
     int i,a[10],sum=0,prod=1;
     clrscr();
     for(i=0;i<=9;i++)
     {
	 printf("Enter a number:");
	 scanf("%d",&a[i]);
     }
     for(i=0;i<=9;i++)
     {
	 if(a[i]%2==0)
	 {
	     sum+=a[i];
	 }
	 else
	 {
	     prod=prod*a[i];
	 }
     }
     printf("Sum of even numbers=%d\n",sum);
      printf("Product of odd numbers=%d",prod);
     getch();
}