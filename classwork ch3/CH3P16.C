#include<stdio.h>
#include<conio.h>
void main()
{
	int t;
	float s0,v0,a;
	clrscr();
	printf("Enter the values of s0, v0 and a:");
	scanf("%f %f %f",&s0,&v0,&a);
	printf("time\t\ts(displacement)\n1\t\t%f\n",
	s0+v0+0.5*a);
	for(t=5;t<=100;t+=5)
	{
		printf("%d\t\t%f\n",t,s0+v0+0.5*a*t*t);
	}
	getch();
}