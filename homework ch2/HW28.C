#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum;
clrscr();
printf("Enter the value of n:");
scanf("%d",&n);
sum=n*(n+1)/2;
printf("The sum is:%d",sum);
getch();
}