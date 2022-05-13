#include<stdio.h>
#include<conio.h>
void main()
{
	int m,n,a[10][10],i,j,sum[10][10],b[10][10];
	clrscr();
	printf("Enter the number of rows and columns:");
	scanf("%d %d",&m,&n);
	printf("Matrix A\n");
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("Enter a value:");
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix B\n");
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("Enter a value:");
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Sum Matrix:\n");
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	getch();
}
