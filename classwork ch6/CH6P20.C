#include<stdio.h>
#include<conio.h>
void transpose(int a[10][10],int b[10][10],int m,int n)
{
	int i,j;
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			b[j][i]=a[i][j];
		}
	}
}
void main()
{
	int m,n,a[10][10],i,j,b[10][10];
	clrscr();
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
	transpose(a,b,m,n);
	printf("Transpose Matrix:\n");
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=m-1;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	getch();
}
