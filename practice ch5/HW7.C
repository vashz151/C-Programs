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
	for(j=1;j<=i;j++)
	{
	   printf("%d",j);
	}
	printf("\n");
     }
}