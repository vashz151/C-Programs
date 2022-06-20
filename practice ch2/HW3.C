#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,sum;
float avg;
clrscr();

printf("Enter two numbers:");
scanf("%d %d",&n1,&n2);
sum=n1+n2;
avg=(n1+n2)/2.0;

printf("Sum is %d and average is %f",sum,avg);
getch();
}