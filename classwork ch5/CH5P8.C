#include<stdio.h>
#include<conio.h>
int LCM(int n1,int n2)
{
	int l;
	l=(n1>n2)?n1:n2;
	while(l%n1!=0 || l%n2!=0)
	{
		l++;
	}
	return l;
}
void main()
{
	int n1,n2,lcm;
	clrscr();
	printf("Enter two numbers:");
	scanf("%d %d",&n1,&n2);
	lcm=LCM(n1,n2);
	printf("LCM=%d",lcm);
	getch();
}