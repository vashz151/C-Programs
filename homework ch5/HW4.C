#include<stdio.h>
#include<conio.h>
void main()
{
     int n;
     void odd(int);
     clrscr();
     printf("Enter the value of n:");
     scanf("%d",&n);
     odd(n);
     getch();
}
void odd(int n)
{
     int i;
     printf("The first %d odd numbers are as follows:\n",n);
     for(i=1;i<=2*n;i+=2)
     {
	printf("%d\n",i);
     }
}