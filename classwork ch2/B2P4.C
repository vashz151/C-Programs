#include<stdio.h>
#include<conio.h>
void main()
{
	float p,n,r,simple_interest;
	clrscr();

	printf("Enter principal, rate of interest and number of years:");
	scanf("%f %f %f",&p,&r,&n);

	simple_interest=p*n*r/100;


	printf("Simple Interest=%f",simple_interest);
	getch();
}


