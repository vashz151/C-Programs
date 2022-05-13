#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=2;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	while(n%i!=0)
	{
		i++;
	}
	if(n==i) printf("It is a prime number");
	else printf("It is not a prime number");
	getch();
}