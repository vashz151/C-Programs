#include<stdio.h>
#include<conio.h>
void main()
{
	float basic,HRA,DA,Gross;
	clrscr();

	printf("Enter basic salary:");
	scanf("%f",&basic);

	DA=0.5*basic;
	HRA=40*(basic+DA)/100;
	Gross=basic+DA+HRA;


	printf("Basic Salary=%f\nDA=%f\nHRA%f\nGross Salary=%f",
	basic,DA,HRA,Gross);
	getch();
}


