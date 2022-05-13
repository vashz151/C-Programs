#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2;
clrscr();
printf("Enter two numbers n1 and n2:");
scanf("%d %d",&n1,&n2);
n1=n1-n2;
n2=n1+n2;
n1=n2-n1;
printf("After swapping value of n1 is %d and  n2 is %d",n1,n2);
getch();
}