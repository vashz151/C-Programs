#include<stdio.h>
#include<conio.h>
void main()
{
	int m,n,a[10][10],i,j,large;
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
	large=a[0][0];
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			if(a[i][j]>large) large=a[i][j];
		}
	}
	printf("Largest number=%d",large);
	getch();
}
