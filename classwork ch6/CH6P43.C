#include<stdio.h>
#include<conio.h>
int x,y;
void main()
{
	int x;
	clrscr();
	x=5;
	y=25;
	::x=3;
	::x=x+::x;
	printf("y=%d, x=%d and x=%d",y,x,::x);
	getch();
}
