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
	 for(j=5-i;j>=1;j--)
	 {
	   printf(" ");
	 }
	 for(j=5;j>n-i;j--)
	 {
	   printf("%d",j);
	 }
	 printf("\n");
     }
     getch();
}