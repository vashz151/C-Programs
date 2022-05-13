//Input and output in main()
//calculation in called function
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,fact;
	int facto(int);
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	fact=facto(n);
	printf("Factorial=%d",fact);
	getch();
}
int facto(int x)
{
	int f=1,i;
	for(i=1;i<=x;i++)
	{
		f=f*i;
	}
	return(f);
}












