#include<stdio.h>
#include<conio.h>
void main()
{
	int n1;
	float n2,prod;
	clrscr();
	printf("Enter a fractional and and integer number:");
	scanf("%f %d",&n2,&n1);
	prod=n1*n2;
	printf("Product=%f",prod);
	getch();
}
