#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,sign=-1;
	long int fact=1;
	float sinx,x,num,term;
	clrscr();
	printf("Enter the angle in degrees and value of n:");
	scanf("%f %d",&x,&n);
	x=x*3.14/180;
	sinx=num=x;
	for(i=3;i<=n;i+=2)
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