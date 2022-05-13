#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,cube;
float y;
clrscr();
printf("Enter the value of n:");
scanf("%d",&n);
for(i=1,y=0;i<=n;i++)
{
cube=i*i*i;
y=y+1.0/cube;
}
printf("y is equal to %f",y);
getch();
}