#include<stdio.h>
#include<conio.h>
void f1()
{
	static int i=0;
	i++;
	printf("%d\n",i);
}
void main()
{
	int j;
	clrscr();
	for(j=1;j<=3;j++) f1();
	getch();
}
