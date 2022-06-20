#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();

	printf("Enter a number:");
	scanf("%d",&n);
	(n%2==0)?printf("Even number"):printf("Odd Number");
	getch();
}


