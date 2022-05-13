#include<stdio.h>
#include<conio.h>
void main()
{
	int count=10,n=1;
	clrscr();
	while(count!=0)
	{
		if(n%5==0 && n%8==0)
		{
			printf("%d\n",n);
			count--;
		}
		n++;
	}
	getch();
}