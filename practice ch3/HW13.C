#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,fact=1,sign=1;
	float sum=0;
	clrscr();
	printf("Enter the value n:");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		fact=fact*i;
		sum=sum+sign*i/(float)fact;
		sign=sign*-1;
	}
	printf("Value of the series=%f",sum);
	getch();
}