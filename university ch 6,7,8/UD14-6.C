#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,row,a[10][10],b[10][10],c[10][10];
	clrscr();
	printf("Enter number of rows of a square matrix:");
	scanf("%d",&row);
	for(i=0;i<=row-1;i++)
	{
		for(j=0;j<=row-1;j++)
		{
			printf("Enter element:");
			scanf("%d",&a[i][j]);
			b[i][j]=a[i][j];
		}
	}
	printf("Entered matrix is:\n");
	for(i=0;i<=row-1;i++)
	{
		for(j=0;j<=row-1;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<=row-1;i++)
	{
		for(j=0;j<=row-1;j++)
		{
			c[i][j]=b[i][j]-a[j][i];
		}
	}
	for(i=0;i<=row-1;i++)
	{
		for(j=0;j<=row-1;j++)
		{
			if(c[i][j]!=0) goto abc;
		}
	}
	printf("Symmetric MAtrix.");
	goto xyz;
	abc:printf("Not a symmetric matrix.");
	xyz: getch();
}








