#include<stdio.h>
#include<conio.h>
void main()
{
	int n,count=0;
	clrscr();
	printf("Enter the value of n:");
	scanf("%d",&n);
	while(n!=0)
	{
		count++;
		n=n/10;

	}
	printf("Number of digits=%d",count);
	getch();
}












