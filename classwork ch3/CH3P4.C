#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	long int fact=1;
	clrscr();
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial=%ld",fact);
	getch();
}