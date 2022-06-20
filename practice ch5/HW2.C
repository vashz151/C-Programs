#include<stdio.h>
#include<conio.h>
void main()
{
     int n;
     void mult(int);
     clrscr();
     printf("Enter the value of n:");
     scanf("%d",&n);
     mult(n);
     getch();
}
void mult(int n)
{
     int i;
     printf("The multiplication table of %d is as follows:\n",n);
     for(i=1;i<=10;i++)
     {
	printf("%d  X  %2d  = %d\n",n,i,n*i);
     }
}