#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2;
clrscr();
printf("Enter two numbers n1 and n2:");
scanf("%d %d",&n1,&n2);
n1=n1+n2;
n2=n1-n2;
n1=n1-n2;
printf("After swapping the values of n1 and n2 are: %d and %d",n1,n2);
getch();
}