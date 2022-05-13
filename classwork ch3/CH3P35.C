#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum,prod,d;
	clrscr();
	printf("Enter the value of n:");
	scanf("%d",&n);
	sum=0;
	prod=1;
	do
	{
		d=n%10;
		sum=sum+d;
		prod=prod*d;
		n=n/10;

	}while(n!=0);
	printf("Sum=%d\nProduct=%d",sum,prod);
	getch();
}












