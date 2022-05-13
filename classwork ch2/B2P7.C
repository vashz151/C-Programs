#include<stdio.h>
#include<conio.h>
void main()
{
	float l,b,area,peri;
	clrscr();

	printf("Enter length and breadth:");
	scanf("%f %f",&l,&b);

	area=l*b;
	peri=2*(l+b);


	printf("Area=%f\nPerimeter=%f",area,peri);
	getch();
}


