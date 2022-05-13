#include<stdio.h>
#include<conio.h>
void main()
{
	int count;
	clrscr();
	printf("Enter some values:");
	count=scanf("%d %d %d");
	printf("Number of inputs given = %d",count);
	getch();
}