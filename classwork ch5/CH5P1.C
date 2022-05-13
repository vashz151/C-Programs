#include<stdio.h>
#include<conio.h>

void main()
{
	int n1,n2,sum;
	int add(int,int);
	clrscr();
	printf("Enter two number:");
	scanf("%d %d",&n1,&n2);
	sum=add(n1,n2);
	printf("Sum=%d",sum);
	getch();
}
int add(int x,int y)
{
	return (x+y);
}












