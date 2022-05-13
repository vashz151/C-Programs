#include<stdio.h>
#include<conio.h>
void main()
{
	int yr;
	clrscr();
	printf("Enter a year number:");
	scanf("%d",&yr);
	if((yr%100!=0 && yr%4==0)||(yr%400==0))
	{
	   printf("Leap Year");
	}
	else
	{
		printf("Not a Leap year");
	}
	getch();
}
