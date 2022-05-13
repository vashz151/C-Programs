#include<stdio.h>
#include<conio.h>
void main()
{
	int m,a[10][10],i,j,sum=0;
	clrscr();
	printf("Enter the number of rows/columns:");
	scanf("%d",&m);
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=m-1;j++)
		{
			printf("Enter a value:");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=m-1;j++)
		{
			if(i+j==m-1) sum+=a[i][j];
		}
	}
	printf("Sum of Diagonal elements=%d",sum);
	getch();
}
