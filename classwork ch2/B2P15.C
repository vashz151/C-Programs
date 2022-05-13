#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,n3,large;
	clrscr();

	printf("Enter three numbers:");
	scanf("%d %d %d",&n1,&n2,&n3);
	large=(n1>n2)?n1:n2;
	large=(large>n3)?large:n3;
	printf("Largest number=%d",large);
	getch();
}


