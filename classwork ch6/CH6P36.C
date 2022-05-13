#include<stdio.h>
#include<conio.h>
void main()
{
	char a[12][4]={"Jan","Feb","Mar","Apr","May","Jun",
	"Jul","Aug","Sep","Oct","Nov","Dec"};
	int month;
	clrscr();
	printf("Enter a month number:");
	scanf("%d",&month);
	printf("Month name is:%s",a[month-1]);
	getch();
}
