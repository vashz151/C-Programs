#include<stdio.h>
#include<conio.h>
int GCD(int n1,int n2)
{
	int g;
	g=(n1<n2)?n1:n2;
	while(n1%g!=0 || n2%g!=0)
	{
		g--;
	}
	return g;
}
void main()
{
	int n1,n2,gcd;
	clrscr();
	printf("Enter two numbers:");
	scanf("%d %d",&n1,&n2);
	gcd=GCD(n1,n2);
	if(gcd==1) printf("GCD doesn't exist");
	else printf("GCD=%d",gcd);
	getch();
}