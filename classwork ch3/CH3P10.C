#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a=0,b=1,c;
	clrscr();
	printf("Enter the value of n:");
	scanf("%d",&n);
	(n>=1)?printf("Fibonacci Series:\n%d\n",a):printf("");
	(n>=2)?printf("%d\n",b):printf("");
	for(i=1;i<=n-2;i++)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}
	getch();
}