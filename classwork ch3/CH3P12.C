#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,fact=1;
	float sum=0;
	clrscr();
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		sum=sum+1.0/fact;
	}
	printf("Sum=%f",sum);
	getch();
}