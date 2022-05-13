#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum;
	clrscr();
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=1,sum=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("Sum=%d",sum);
	getch();
}