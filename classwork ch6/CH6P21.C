#include<stdio.h>
#include<conio.h>
void transpose(int a[10][10],int m)
{
	int i,j,temp;
	for(i=0;i<=m-1;i++)
	{
		for(j=i;j<=m-1;j++)
		{
			temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
		}
	}
}
void main()
{
	int m,a[10][10],i,j;
	clrscr();
	printf("Enter the number of rows / columns:");
	scanf("%d",&m);
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=m-1;j++)
		{
			printf("Enter a value:");
			scanf("%d",&a[i][j]);
		}
	}
	transpose(a,m);
	printf("Transpose Matrix:\n");
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=m-1;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	getch();
}
