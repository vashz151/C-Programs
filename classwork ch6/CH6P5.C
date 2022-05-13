#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,sum=0,a[100],i;
	float avg,sum1=0;
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
	for(i=0;i<=n-1;i++)
	{
		sum1=sum1+(a[i]-avg)*(a[i]-avg);
	}
	sum1=sqrt(sum1/n);
	printf("Std Dev=%f",sum1);
	getch();
}
