#include<stdio.h>
#include<conio.h>
int sym(int row,int col,int a[10][10],int b[10][10])
{
     int c[10][10],i,j;
     for(i=0;i<=row-1;i++)
	{
		for(j=0;j<=col-1;j++)
		{
			c[i][j]=b[i][j]-a[j][i];
		}
	}
	for(i=0;i<=col-1;i++)
	{
		for(j=0;j<=row-1;j++)
		{
			if(c[i][j]!=0) goto abc;
		}
	}
	return 1;
	goto end;
	abc:return 0;
	end://nothing to write
     
}
void main()
{
	int i,j,row,col,a[10][10],b[10][10],x;
	clrscr();
	printf("Enter number of rows and columns of a  matrix:");
	scanf("%d %d",&row,&col);
	for(i=0;i<=row-1;i++)
	{
		for(j=0;j<=col-1;j++)
		{
			printf("Enter element:");
			scanf("%d",&a[i][j]);
			b[i][j]=a[i][j];
		}
	}
	x=sym(row,col,a,b);
	if(x==1) printf("Symmetric MAtrix.");
	if(x==0) printf("Not a symmetric matrix.");
	getch();
}








