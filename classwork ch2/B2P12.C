#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,n3;
	float avg;
	clrscr();

	printf("Enter three numbers:");
	scanf("%d %d %d",&n1,&n2,&n3);

	avg=(n1+n2+n3)/(float)3;

	printf("Average=%f",avg);
	getch();
}


