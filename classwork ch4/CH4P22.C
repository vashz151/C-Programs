
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,lcm,gcd;

	clrscr();
	printf("Enter two numbers:");
	scanf("%d %d",&n1,&n2);
	lcm=(n1>n2)?n1:n2;
	while(lcm%n1!=0 || lcm%n2!=0)
	{
		lcm++;
	}
	printf("LCM=%d\n",lcm);
	gcd=n1*n2/lcm;
	if(gcd==1) printf("GCD doesn't exist");
	else printf("GCD=%d",gcd);
	getch();
}