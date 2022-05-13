//first two elements are 0 and 1 thereafter every element
//is sum of previous two elements
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	int fibo(int);
	clrscr();
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Fibonacci Series:\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\n",fibo(i));
	}
	getch();
}
int fibo(int i)
{
	if(i==1) return 0;
	if(i==2) return 1;
	return(fibo(i-1)+fibo(i-2));
}












