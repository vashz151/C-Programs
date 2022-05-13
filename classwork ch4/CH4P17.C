#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0;
	clrscr();
	back:
	printf("Enter a number:");
	scanf("%d",&n);
	sum=sum+n;
	if(sum<100) goto back;
	printf("Sum=%d",sum);
	getch();
}












