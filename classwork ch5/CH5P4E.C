//Input and output in main()
//calculation in called function
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	long int fact;
	long int facto(int);
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	fact=facto(n);
	printf("Factorial=%ld",fact);
	getch();
}
long int facto(int x)
{
	long int f=1;
	int i;
	for(i=1;i<=x;i++)
	{
		f=f*i;
	}
	return(f);
}












