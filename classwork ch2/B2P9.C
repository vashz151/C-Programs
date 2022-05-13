#include<stdio.h>
#include<conio.h>
void main()
{
	int n,d1,d2,rev;
	clrscr();

	printf("Enter a 2-digit number:");
	scanf("%2d",&n);

	d1=n/10;
	d2=n%10;
	rev=d2*10+d1;

	printf("Reverse number=%d",rev);
	getch();
}


