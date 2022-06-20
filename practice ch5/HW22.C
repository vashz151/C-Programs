#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
   int n;
   float x,sum;
   float Sum(float,int);
   clrscr();
   printf("Enter the value of x and n:");
   scanf("%f %d",&x,&n);
   sum=Sum(x,n);
   printf("Sum of the following series is equal to %f",sum);
   getch();
}
float Sum(float x,int n)
{
   int i,fact;
   float s,term,num;
   s=x;
   for(i=2,fact=1;i<=n;i+=2)
   {
	fact=fact*i*(i-1);
	num=pow(x,i);
	term=num/fact;
	s+=term;
   }
   return s;
}