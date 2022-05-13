#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,large;
	clrscr();

	printf("Enter two numbers:");
	scanf("%d %d",&n1,&n2);
	large=(n1>n2)?n1:n2;
	printf("Largest number=%d",large);
	getch();
}


