#include<stdio.h>
#include<conio.h>
void main()
{
     int i,j,n;
     clrscr();
     printf("Enter the number of lines:");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
	 for(j=i;j<=2*i-1;j++)
	 {
	   printf("%d",j);
	 }
	 for(j=2*i-2;j>=i;j--)
	 {
	   printf("%d",j);
	 }
	 printf("\n");
     }
     getch();
}