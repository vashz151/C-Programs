#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2;
clrscr();
printf("Enter first number:");
scanf("%d",&n1);
printf("Enter second number:");
scanf("%d",&n2);
(n1>n2)?printf("n1*n2=%d",n1*n2):printf("n1/n2=%d",n1/n2);
getch();
}