#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=2*n;i+=2)
	{
		printf("%d\n",i);
	}
	getch();
}