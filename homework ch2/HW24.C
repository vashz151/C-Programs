#include<stdio.h>
#include<conio.h>
void main()
{
	float basic,hra,da,ta,pf,it,gross;
	clrscr();
	printf("Enter the basic salary:");
	scanf("%f",&basic);
	da=0.5*basic;
	hra=0.4*(basic+da);
	ta=2000;
	pf=0.25*basic;
	it=(basic+hra+da+ta-pf)*0.1;
	gross=basic+hra+da+ta-pf-it;
	printf("Basic=%f\nHRA=%f\nDA=%f\nTA=%f\nPF=%f\nIT=%f\nGross=%f"
	,basic,hra,da,ta,pf,it,gross);
	getch();
}