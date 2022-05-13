#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a[10][10],b[10][10],c[10][10],m,n,choice;
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
	}
    }
    printf("1.Add\n2.Subtract\n3.Product\n4.Transpose (Matrix 1)\n5.Transpose(Matrix 2)\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
       case 1:printf("Addition of two matrix:\n");
       for(i=0;i<=m-1;i++)
       {
	    for(j=0;j<=n-1;j++)
	    {
		  c[i][j]=a[i][j]+b[i][j];
		  printf("%d\t",c[i][j]);
	    }
	    printf("\n");
       }
       break;
       case 2:printf("Difference of two matrix:\n");
       for(i=0;i<=m-1;i++)
       {
	    for(j=0;j<=n-1;j++)
	    {
		  c[i][j]=a[i][j]-b[i][j];
		  printf("%d\t",c[i][j]);
	    }
	    printf("\n");
       }
       break;
       case 3:printf("Multiplication of two matrix:\n");
       for(i=0;i<=m-1;i++)
       {
	    for(j=0;j<=n-1;j++)
	    {
		  c[i][j]=0;
		  c[i][j]+=a[i][j]+b[j][j];
		  printf("%d\t",c[i][j]);
	    }
	    printf("\n");
       }
       break;
       case 4:printf("Transpose of matrix 1 is:\n");
       for(i=0;i<=m-1;i++)
       {
	    for(j=0;j<=n-1;j++)
	    {
		  c[i][j]=a[j][i];
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
       break;
       case 5:printf("Transpose of matrix 2 is :\n");
       for(i=0;i<=m-1;i++)
       {
	    for(j=0;j<=n-1;j++)
	    {
		  c[j][i]=b[i][j];
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
       break;
       default:printf("Invalid choice");
    }
    getch();
}