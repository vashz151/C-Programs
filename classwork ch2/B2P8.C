#include<stdio.h>
#include<conio.h>
void main()
{
	int n,d1,d2,d3;
	clrscr();

	printf("Enter a 3-digit number:");
	scanf("%3d",&n);

	d3=n%10;
	d2=n/10%10;
	d1=n/100;
	printf("Digit1=%d\nDigit2=%d\nDigit3=%d",
	d1,d2,d3);
	getch();
}


