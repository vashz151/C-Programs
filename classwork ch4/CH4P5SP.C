#include<math.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,d,sum=0,copy,count=0;

	clrscr();
	printf("Enter the number to be checked:");
	scanf("%d",&n);
	copy=n;
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	n=copy;
	while(n!=0)
	{
		d=n%10;
		sum=sum+pow(d,count);
		n=n/10;
	}
	if(copy==sum) printf("Its Armstrong's number");
	else printf("Its not an Armstrong's number");
	getch();
}