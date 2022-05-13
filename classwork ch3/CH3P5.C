#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d x %2d = %3d\n",n,i,n*i);
	}
	getch();
}