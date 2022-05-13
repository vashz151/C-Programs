#include<stdio.h>
#include<conio.h>
void main()
{
	float c,f;
	clrscr();

	printf("Enter the temperature in Fahrenheit:");
	scanf("%f",&f);

	c=(float)5/9*(f-32);

	printf("Temperature in Celcius=%f",c);
	getch();
}


