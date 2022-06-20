#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sum=0;
	clrscr();
	for(i=1;i<=9;i++)
	{
		sum=sum+i%2;
	}
	printf("Sum=%d",sum);
	getch();

}