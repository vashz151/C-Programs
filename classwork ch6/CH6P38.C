#include<stdio.h>
#include<conio.h>
void main()
{
	int m,n,a[10][10],i,j,sum[10];
	clrscr();
	printf("Enter the number of rows & columns:");
	scanf("%d %d",&m,&n);
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("Enter a value:");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=n-1;i++)
	{
		sum[i]=0;
	}
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			sum[j]+=a[i][j];
		}
	}
	printf("Sum Array:\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%d\t",sum[i]);
	}
	getch();
}
