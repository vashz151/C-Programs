//GCD using recursion
#include<stdio.h>
#include<conio.h>
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
int GCD(int n1,int n2)
{
	if(n2==0) return n1;
	return(GCD(n2,n1%n2));
}












