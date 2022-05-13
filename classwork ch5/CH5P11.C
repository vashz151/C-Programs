//WAP to find y using recursive function
//where y=xraised to n
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	float x,y;
	float power(float,int);
	clrscr();
	printf("Enter values of x and n:");
	scanf("%f %d",&x,&n);
	y=power(x,n);
	printf("y=%f",y);
	getch();
}
float power(float x,int n)
{
	if(n==0) return 1;
	return(x*power(x,n-1));
}












