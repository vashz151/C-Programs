#include<stdio.h>
#include<conio.h>
void main()
{
	int n,countb=0,counta=0;
	float x;
	clrscr();
	printf("Enter a float value:");
	scanf("%f",&x);
	n=x;
	x=x-n;
	while(n!=0)
	{
		countb++;
		n=n/10;

	}
	while(x!=0)
	{
		counta++;
		x=x*10;
		n=x;
		x=x-n;
	}
	printf("Number of digits before=%d\n",countb);
	printf("Number of digits after=%d\n",counta);
	getch();
}












