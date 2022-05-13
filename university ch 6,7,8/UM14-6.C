#include<stdio.h>
#include<conio.h>
int i,j,a[10][10],b[10][10],c[10][10];
void read_matrix(int m,int n,int p)
{
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
     for(i=0;i<=n-1;i++)
     {
	  for(j=0;j<=p-1;j++)
	  {
	      printf("Enter a value:");
	      scanf("%d",&b[i][j]);
	  }
     }

}
void Display_matrix(int m,int n,int p)
{
     printf("Matrixx 1 is:\n");
     for(i=0;i<=m-1;i++)
     {
	  for(j=0;j<=n-1;j++)
	  {
	       printf("%d\t",a[i][j]);
	  }
	  printf("\n");
     }
     printf("Matrix 2 is:\n");
     for(i=0;i<=n-1;i++)
     {
	  for(j=0;j<=p-1;j++)
	  {
		printf("%d\t",b[i][j]);
	  }
	  printf("\n");
     }
}
void Multiply_matrix(int m,int n,int p)
{
     int k;
     for(i=0;i<=m-1;i++)
     {
	  for(j=0;j<=p-1;j++)
	  {
	      for(k=0;k<=n-1;k++)
	      {
		  c[i][j]+=a[i][k]*b[k][j];
	      }
	  }
     }
     printf("Multiplication matrix:\n");
     for(i=0;i<=m-1;i++)
     {
	   for(j=0;j<=p-1;j++)
	   {
	      printf("%d\t",c[i][j]);
	   }
	   printf("\n");
     }
}
void main()
{
     int m,n,p,q;
     clrscr();
     printf("Enter the rows and columns of matrix 1:");
     scanf("%d %d",&m,&n);
     printf("Enter the rows and columns of matrix 2:");
     scanf("%d %d",&q,&p);
     if(n==q)
     {
	   read_matrix(m,n,p);
	   Display_matrix(m,n,p);
	   Multiply_matrix(m,n,p);
     }
     else printf("Matrix multiplication not possible");
     getch();
}
