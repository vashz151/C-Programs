#include<stdio.h>
#include<conio.h>
void main()
{
     int i,j,a[2][2],temp;
     clrscr();
     printf("Enter elements of 2D square matrix:\n");
     for(i=0;i<=1;i++)
     {
	 for(j=0;j<=1;j++)
	 {
	    printf("Enter an element:");
	    scanf("%d",&a[i][j]);
	 }
     }
     for(i=0;i<=1;i++)
     {
	 for(j=i;j<=1;j++)
	 {
	     temp=a[j][i];
	     a[j][i]=a[i][j];
	     a[i][j]=temp;
	 }
     }
     printf("Transpose matrix is:\n");
     for(i=0;i<=1;i++)
     {
	 for(j=0;j<=1;j++)
	 {
	     printf("%d\t",a[i][j]);
	 }
	 printf("\n");
     }
     getch();
}




