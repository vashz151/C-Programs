#include<stdio.h>
#include<conio.h>
void main()
{
	float km,m,cm,ft,inch;
	clrscr();

	printf("Enter distance in kilometers:");
	scanf("%f",&km);

	m=km*1000;
	cm=m*100;
	ft=cm/30;
	inch=ft*12;


	printf("Distance is %f m = %f cm = %f feet = %f inches",
	m,cm,ft,inch);
	getch();
}


