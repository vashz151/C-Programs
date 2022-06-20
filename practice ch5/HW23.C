#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	float sum;
	float Sum(float);
	clrscr();
	printf("Enter the value n:");
	scanf("%d",&n);
	sum=Sum(n);
	printf("Value of the series=%f",sum);
	getch();
}
float Sum(float x)
{
	int i,fact=1,sign=1;
	float s=0;
	for(i=2;i<=x;i++)
	{
		fact=fact*i;
		s+=sign*i/(float)fact;
		sign=sign*-1;
	}
	return s;
}