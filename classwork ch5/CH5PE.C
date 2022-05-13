#include<stdio.h>
#include<conio.h>

void main()
{
	int n1,n2,s;
	int prod(int,int);
	clrscr();
	printf("Enter two number:");
	scanf("%d %d",&n1,&n2);
	s=prod(n1,n2);
	printf("Value of s=%d",s);
	getch();
}
int prod(int x,int y)
{
	int p;
	p=x*y;
	return p;
}












