#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a[10][10],b[10][10],c[10][10],m,n,p,k;
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
    printf("Enter number of columns of matrix 2:");
    scanf("%d",&p);
    printf("Enter elements of matrix 2:\n");
    for(i=0;i<=n-1;i++)
    {
	for(j=0;j<=p-1;j++)
	{
	   printf("Enter a value:");
	   scanf("%d",&b[i][j]);
	}
    }
    printf("Multiplication of two matrix:\n");
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
    for(i=0;i<=m-1;i++)
    {
	 for(j=0;j<=p-1;j++)
	 {
	     printf("%d\t",c[i][j]);
	 }
	 printf("\n");
    }
    printf("Transpose of matrix 1 is:\n");
    for(i=0;i<=m-1;i++)
    {
	 for(j=0;j<=n-1;j++)
	 {
	    c[j][i]=a[i][j];
	 }
    }
    for(i=0;i<=n-1;i++)
    {
	 for(j=0;j<=m-1;j++)
	 {
	    printf("%d\t",c[i][j]);
	 }
	 printf("\n");
    }
    printf("Transpose of matrix 2 is :\n");
    for(i=0;i<=n-1;i++)
    {
	 for(j=0;j<=p-1;j++)
	 {
	    c[j][i]=b[i][j];
	 }
    }
    for(i=0;i<=p-1;i++)
    {
	 for(j=0;j<=n-1;j++)
	 {
	     printf("%d\t",c[i][j]);
	 }
	 printf("\n");
    }
    getch();
}