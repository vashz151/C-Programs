#include<stdio.h>
#include<conio.h>
void main()
{
	int n,digit,rev=0;
	clrscr();
     	printf("Enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
		digit=n%10;
		rev=rev*10+digit;
		n=n/10;
	}
	while(rev!=0)
	{
		digit=rev%10;
		rev=rev/10;
		switch(digit)
		{
			case 0:printf("Zero ");
			break;
			case 1:printf("One ");
			break;
			case 2:printf("Two ");
			break;
			case 3:printf("Three ");
			break;
			case 4:printf("Four ");
			break;
			case 5:printf("Five ");
			break;
			case 6:printf("Six ");
			break;
			case 7:printf("Seven ");
			break;
			case 8:printf("Eight ");
			break;
			case 9:printf("Nine ");
			break;
		}
	}
	getch();
}
