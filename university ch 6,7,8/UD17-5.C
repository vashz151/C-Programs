#include<stdio.h>
#include<conio.h>
void multiply(int a[10][10],int b[10][10],int c[10][10],int m,int n, int p)
{
	int i,j,k;
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=p-1;j++)
		{
			c[i][j]=0;
			for(k=0;k<=n-1;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
}
void main()
{
	int m,n,p,a[10][10],i,j,c[10][10],b[10][10];
	clrscr();
	printf("Matrix A\n");
	printf("Enter the number of rows and columns:");
	scanf("%d %d",&m,&n);
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("Enter a value:");
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix B\n");
	printf("Enter the number of columns:");
	scanf("%d",&p);
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=p-1;j++)
		{
			printf("Enter a value:");
			scanf("%d",&b[i][j]);
		}
	}
	multiply(a,b,c,m,n,p);
	printf("Product Matrix:\n");
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=p-1;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	getch();
}
