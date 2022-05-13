#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum;
	int add(int);
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	sum=add(n);
	printf("Sum=%d",sum);
	getch();
}
int add(int x)
{
	if(x==0) return 0;
	else return(x+add(x-1));
}












