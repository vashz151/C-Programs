#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float a,b,c,x1,x2,x;
	clrscr();
	printf("Enter the coefficients of quadratic equation:");
	scanf("%f %f %f",&a,&b,&c);
	x=(b*b-4*a*c);
	x1=(x>=0)?(-b+sqrt(x))/(2*a):-b/(2*a);
	x2=(x>=0)?(-b-sqrt(x))/(2*a):sqrt(-x)/(2*a);
	(x>=0)?printf("Roots are real: %5.2f and %5.2f",x1,x2):
	printf("Roots are imaginary: %5.2f+j(%5.2f) and %5.2f-j(%5.2f)",
	x1,x2,x1,x2);
	getch();
}
