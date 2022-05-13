#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a[100],i,temp,count,j;
	clrscr();
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter a number:");
		scanf("%d",&a[i]);
	}
	printf("Enter number of times to rotate:");
	scanf("%d",&count);
	for(j=1;j<=count;j++)
	{
		temp=a[n-1];
		for(i=n-1;i>=1;i--)
		{
			a[i]=a[i-1];
		}
		a[0]=temp;
	}
	printf("After shifting:\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
}
