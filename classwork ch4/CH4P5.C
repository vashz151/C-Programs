
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,d,sum=0,copy;

	clrscr();
	printf("Enter the number to be checked:");
	scanf("%d",&n);
	copy=n;
	while(n!=0)
	{
		d=n%10;
		sum=sum+d*d*d;
		n=n/10;
	}
	if(copy==sum) printf("Its Armstrong's number");
	else printf("Its not an Armstrong's number");
	getch();
}