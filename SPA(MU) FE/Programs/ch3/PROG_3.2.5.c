#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d X %d = %d\n",n,i,(n*i));
	}
	getch();
} 
