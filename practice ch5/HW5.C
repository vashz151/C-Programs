#include<stdio.h>
#include<conio.h>
void main()
{
     int n;
     void fibo(int);
     clrscr();
     printf("Enter the value of n:");
     scanf("%d",&n);
     printf("Fibonacci series\n0\n1\n");
     fibo(n);
     getch();
}
void fibo(int n)
{
     int a=0,b=1,c,i;
     for(i=1;i<=n-2;i++)
     {
	c=a+b;
	printf("%d\n",c);
	a=b;
	b=c;
     }
}