#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
for(i=1,sum=0;i<=n;i++)
{
sum+=i;
}
printf("Triangular number is equal to %d",sum);
getch();
}