#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sign=-1;
	long int fact=1;
	float sinx,x,num,term;
	clrscr();
	printf("Enter the angle in degrees:");
	scanf("%f",&x);
	x=x*3.14/180;
	sinx=num=term=x;
	for(i=3;term>=0.000001;i+=2)
	{
		fact=fact*i*(i-1);
		num=num*x*x;
		term=num/fact;
		sinx=sinx+term*sign;
		sign=sign*-1;
	}
	printf("Sin x=%f",sinx);
	getch();
}