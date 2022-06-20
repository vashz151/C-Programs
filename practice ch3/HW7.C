#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,square;
float x;
clrscr();
printf("Enter the value of n:");
scanf("%d",&n);
for(i=1,x=0;i<=n;i++)
{
square=i*i;
x=x+1.0/square;
}
printf("x is equal to %f",x);
getch();
}