#include<stdio.h>
#include<conio.h>
void main()
{
	float hours,bill=0;
	clrscr();
	printf("Enter the number of hours:");
	scanf("%f",&hours);
	while(hours>=6)
	{
		bill=bill+90;
		hours-=6;
	}
	if(hours>=4.5)
	{
		bill=bill+90;
		hours=hours-6;
	}
	while(hours>0.5)
	{
		bill=bill+20;
		hours=hours-1;
	}
	if(hours>0)
	bill=bill+10;
	printf("Total bill=%f",bill);

	getch();
}