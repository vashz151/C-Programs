#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	float sum=0;
	clrscr();
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+1.0/i;
	}
	printf("Sum=%f",sum);
	getch();
}