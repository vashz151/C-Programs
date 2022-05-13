#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rev=0,d,bin=0,count=0;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
		d=n%2;
		rev=rev*10+d;
		n=n/2;
		count++;

	}
	while(count!=0)
	{
		d=rev%10;
		bin=bin*10+d;
		rev=rev/10;
		count--;
	}
	printf("Binary Equivalent=%d",bin);
	getch();
}












