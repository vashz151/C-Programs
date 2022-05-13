#include<stdio.h>
#include<conio.h>
void main()
{
     int i,j,n,a[10][10],temp;
     clrscr();
     printf("Enter row/column of square matrix:");
     scanf("%d",&n);
     for(i=0;i<=n-1;i++)
     {
	 for(j=0;j<=n-1;j++)
	 {
	    printf("Enter an element:");
	    scanf("%d",&a[i][j]);
	 }
     }
     for(i=0;i<=n-1;i++)
     {
	 for(j=i;j<=n-1;j++)
	 {
	     temp=a[j][i];
	     a[j][i]=a[i][j];
	     a[i][j]=temp;
	 }
     }
     for(i=0;i<=n-1;i++)
     {
	 for(j=0;j<=n-1;j++)
	 {
	     printf("%d\t",a[i][j]);
	 }
	 printf("\n");
     }
     getch();
}




