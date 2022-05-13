#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,a[100],i;
	float avg;
	clrscr();
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter a number:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		sum=sum+a[i];
	}
	avg=(float)sum/n;
	printf("Average=%f",avg);
	getch();
}
