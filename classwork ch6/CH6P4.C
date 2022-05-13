#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,sum=0,sum1=0;
	clrscr();
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter an element:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		sum=sum+a[i]*a[i];
		sum1+=a[i];
	}
	printf("Value=%d",sum-sum1*sum1);
	getch();
}