#include<stdio.h>
#include<conio.h>

void main()
{
	int n1,n2;
	void add(int,int);
	clrscr();
	printf("Enter two number:");
	scanf("%d %d",&n1,&n2);
	add(n1,n2);
	getch();
}
void add(int x,int y)
{
	int p;
	p=x+y;
	printf("Sum=%d",p);
}












