#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,fact=1,sum=1;
	clrscr();
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=3;i<=2*n-1;i+=2)
	{
		fact=fact*i*(i-1);
		sum=sum+fact;
	}
	printf("Sum=%d",sum);
	getch();
}