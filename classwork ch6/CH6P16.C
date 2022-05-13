#include<stdio.h>
#include<conio.h>
void main()
{
	int m,n,a[10][10],i,j,sum=0;
	float avg;
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
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			sum=sum+a[i][j];
		}
	}
	avg=sum/(float)(m*n);
	printf("Average=%f",avg);
	getch();
}
