#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a[10][10],b[10][10],c[10][10],d[10][10],m,n;
    clrscr();
    printf("Enter the number of rows and columns:");
    scanf("%d %d",&m,&n);
    printf("Enter elements of matrix 1:\n");
    for(i=0;i<=m-1;i++)
    {
	for(j=0;j<=n-1;j++)
	{
	   printf("Enter a value:");
	   scanf("%d",&a[i][j]);
	}
    }
    printf("Enter elements of matrix 2:\n");
    for(i=0;i<=m-1;i++)
    {
	for(j=0;j<=n-1;j++)
	{
	   printf("Enter a value:");
	   scanf("%d",&b[i][j]);
	   c[i][j]=a[i][j]+b[i][j];
	   d[i][j]=a[i][j]-b[i][j];
	}
    }
    printf("Addition of two matrix:\n");
    for(i=0;i<=m-1;i++)
    {
	for(j=0;j<=n-1;j++)
	{
	   printf("%d\t",c[i][j]);

	}
	printf("\n");
    }
    printf("Difference of two matrix:\n");
     for(i=0;i<=m-1;i++)
    {
	for(j=0;j<=n-1;j++)
	{
	   printf("%d\t",d[i][j]);

	}
	printf("\n");
    }

    getch();
}