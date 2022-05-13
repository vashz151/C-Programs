#include<stdio.h>
#include<conio.h>
void main()
{
     int n;
     void pat(int);
     clrscr();
     printf("Enter the number of lines:");
     scanf("%d",&n);
     pat(n);
     getch();
}
void pat(int n)
{
     int i,j;
     for(i=1;i<=n;i++)
     {
	for(j=n-i;j>=1;j--)
	{
	   printf(" ",j);
	}
	for(j=1;j<=i;j++)
	{
	   printf("%c",j+64);
	}
	for(j=i-1;j>=1;j--)
	{
	   printf("%c",j+64);
	}
	printf("\n");
     }
}