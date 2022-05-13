#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
     float a,b,c,d,r1,r2,real,imag;
     clrscr();
     printf("Enter the coefficents of equation ax^2+bx+c=0:");
     scanf("%f%f%f",&a,&b,&c);
     d=b*b-4*a*c;
     if(d>=0)
     {
	printf("Roots are real");
	r1=(-b+sqrt(d))/(2*a);
	r2=(-b-sqrt(d))/(2*a);
	printf("\nRoots are %f and %f",r1,r2);
     }
     else
     {
	printf("Roots are imaginary");
	real=-b/(2*a);
	imag=sqrt(-d)/(2*a);
	printf("\nRoot1= %f+%fi and root2=%f-%fi",real,imag,real,imag);
     }
     getch();
}